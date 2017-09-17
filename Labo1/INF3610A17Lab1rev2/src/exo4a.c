/*
*********************************************************************************************************
*                                                 uC/OS-II
*                                          The Real-Time Kernel
*                                               PORT Windows
*
*
*            				  Arnaud Desault, Frédéric Fortier, Eva Terriault
*								École Polytechnique de Montreal, QC, CANADA
*                                                  08/2017
*
* File : exo4a.c
* 
*********************************************************************************************************
*/

// Main include of µC-II
#include "includes.h"

/*
*********************************************************************************************************
*                                              CONSTANTS
*********************************************************************************************************
*/

#define TASK_STK_SIZE       16384            // Size of each task's stacks (# of WORDs)

#define ROBOT_A_PRIO   		9				 // Defining Priority of each task
#define ROBOT_B_PRIO   		8
#define CONTROLLER_PRIO     7
#define TRANSPORT_PRIO		10

#define TIME_OP_PRIO		6

/*
*********************************************************************************************************
*                                             VARIABLES
*********************************************************************************************************
*/

OS_STK           prepRobotAStk[TASK_STK_SIZE];	//Stack of each task
OS_STK           prepRobotBStk[TASK_STK_SIZE];
OS_STK           transportStk[TASK_STK_SIZE];
OS_STK           controllerStk[TASK_STK_SIZE];

/*
*********************************************************************************************************
*                                           SHARED  VARIABLES
*********************************************************************************************************
*/
//OS_EVENT* sem_controller_to_robot_A;
//OS_EVENT* sem_robot_A_to_robot_B;
OS_EVENT* sem_prep_to_transport;
OS_EVENT* sem_transport_done;
OS_EVENT* mutex_time_op;

OS_EVENT* q_prep_A;
OS_EVENT* q_prep_B;
OS_EVENT* q_transport;

volatile int total_prep_time = 0;

volatile void *prep_A_msg[10];
volatile void *prep_B_msg[10];
volatile void *transport_msg[10];

/*
*********************************************************************************************************
*                                         FUNCTION PROTOTYPES
*********************************************************************************************************
*/
void    prep_robot_A(void *data);
void    prep_robot_B(void *data);
void    transport(void *data);
void    controller(void *data);
void    errMsg(INT8U err, char* errMSg);
int		readCurrentTotalPrepTime();
void	writeCurrentTotalPrepTime(int qty);

/*
*********************************************************************************************************
*                                                  MAIN
*********************************************************************************************************
*/

void main(void)
{

	UBYTE err;

	// A compléter
	OSInit();

	err = (OSTaskCreate(*controller, NULL, &controllerStk[TASK_STK_SIZE - 1], CONTROLLER_PRIO));
	errMsg(err, "Error lors de la création de la tâche du contrôleur.");

	err = (OSTaskCreate(*prep_robot_A, NULL, &prepRobotAStk[TASK_STK_SIZE - 1], ROBOT_A_PRIO));
	errMsg(err, "Error lors de la création de la tâche de préparation du robot A.");



	err = (OSTaskCreate(*prep_robot_B, NULL, &prepRobotBStk[TASK_STK_SIZE - 1], ROBOT_B_PRIO));
	errMsg(err, "Error lors de la création de la tâche de préparation du robot B.");


	err = (OSTaskCreate(*transport, NULL, &transportStk[TASK_STK_SIZE - 1], TRANSPORT_PRIO));
	errMsg(err, "Error lors de la création de la tâche du transport.");

	if (!(sem_prep_to_transport = OSSemCreate(0))) {
		printf("Erreur lors de la création du sémaphore de transport prêt.");
		exit(1);
	}

	if (!(sem_transport_done = OSSemCreate(2))) {
		printf("Erreur lors de la création du sémaphore de transport terminé.");
		exit(1);
	}

	if (!(q_prep_A = OSQCreate(&prep_A_msg[0], 10))) {
		printf("Erreur lors de la création de la file pour le robot A.");
		exit(1);
	}

	if (!(q_prep_B = OSQCreate(&prep_B_msg[0], 10))) {
		printf("Erreur lors de la création de la file pour le robot B.");
		exit(1);
	}

	if (!(q_transport = OSQCreate(&transport_msg[0], 10))) {
		printf("Erreur lors de la création de la file pour le transport.");
		exit(1);
	}

	mutex_time_op = OSMutexCreate(TIME_OP_PRIO, &err);
	errMsg(err, "Error lors de la création du mutex de lecture/écriture du temps.");



	OSStart();

	return;
}

/*
*********************************************************************************************************
*                                            TASK FUNCTIONS
*********************************************************************************************************
*/


void prep_robot_A(void* data)
{
	INT8U err;
	int startTime = 0;
	int orderNumber = 1;
	int *robotAPrepTime;
	printf("TACHE PREP_ROBOT_A @ %d : DEBUT.\n", OSTimeGet() - startTime);
	while (1)
	{

		OSSemPend(sem_transport_done, 0, &err);
		errMsg(err, "Error while trying to access sem_transport_done");

		robotAPrepTime = OSQPend(q_prep_A, 0, &err);
		errMsg(err, "Error while trying to access q_prep_A");

		printf("TACHE PREP_ROBOT_A COMMANDE #%d @ %d : Début préparation robot A.\n", orderNumber, OSTimeGet() - startTime);
		OSTimeDly(*robotAPrepTime);
		printf("TACHE PREP_ROBOT_A COMMANDE #%d @ %d : fin préparation robot A.\n", orderNumber, OSTimeGet() - startTime);

		OSMutexPend(mutex_time_op, 0, &err);
		errMsg(err, "Error while trying to access mutex_time_op");

		writeCurrentTotalPrepTime(readCurrentTotalPrepTime() + *robotAPrepTime);

		free(robotAPrepTime);

		err = OSMutexPost(mutex_time_op);
		errMsg(err, "Error while trying to post mutex_time_op");

		printf("TACHE PREP_ROBOT_A COMMANDE #%d @ %d : Demande de démarrage du transport.\n", orderNumber, OSTimeGet() - startTime);

		err = OSSemPost(sem_prep_to_transport);
		errMsg(err, "Error while trying to post sem_prep_to_transport");

		orderNumber++;
	}

}

void prep_robot_B(void* data)
{
	INT8U err;
	int startTime = 0;
	int orderNumber = 1;
	int *robotBPrepTime;
	printf("TACHE PREP_ROBOT_B @ %d : DEBUT. \n", OSTimeGet() - startTime);
	while (1)
	{

		OSSemPend(sem_transport_done, 0, &err);
		errMsg(err, "Error while trying to access sem_transport_done");

		robotBPrepTime = OSQPend(q_prep_B, 0, &err);
		errMsg(err, "Error while trying to access q_prep_B");

		printf("TACHE PREP_ROBOT_B COMMANDE #%d @ %d : Début préparation robot B.\n", orderNumber, OSTimeGet() - startTime);
		OSTimeDly(*robotBPrepTime);
		printf("TACHE PREP_ROBOT_B COMMANDE #%d @ %d : Fin préparation robot B.\n", orderNumber, OSTimeGet() - startTime);

		OSMutexPend(mutex_time_op, 0, &err);
		errMsg(err, "Error while trying to access mutex_time_op");

		writeCurrentTotalPrepTime(readCurrentTotalPrepTime() + *robotBPrepTime);

		free(robotBPrepTime);

		err = OSMutexPost(mutex_time_op);
		errMsg(err, "Error while trying to post mutex_time_op");

		printf("TACHE PREP_ROBOT_B COMMANDE #%d @ %d : Demande de démarrage du transport.\n", orderNumber, OSTimeGet() - startTime);

		err = OSSemPost(sem_prep_to_transport);
		errMsg(err, "Error while trying to post sem_prep_to_transport");

		orderNumber++;
	}
}
void transport(void* data)
{
	INT8U err;
	int startTime = 0;
	int orderNumber = 1;
	int *time;
	printf("TACHE TRANSPORT @ %d : DEBUT. \n", OSTimeGet() - startTime);
	while (1)
	{

		// WAIT FOR TWO READY ROBOTS
		OSSemPend(sem_prep_to_transport, 0, &err);
		errMsg(err, "Error while trying to post sem_prep_to_transport");

		OSSemPend(sem_prep_to_transport, 0, &err);
		errMsg(err, "Error while trying to post sem_prep_to_transport");

		time = OSQPend(q_transport, 0, &err);
		errMsg(err, "Error while trying to access q_transport");

		printf("TEMPS TOTAL DE PRÉPARATION ÉCOULÉ %d.\n", readCurrentTotalPrepTime());

		printf("TACHE TRANSPORT COMMANDE #%d @ %d : Début transport.\n", orderNumber, OSTimeGet() - startTime);
		OSTimeDly(*time);
		printf("TACHE TRANSPORT COMMANDE #%d @ %d : Fin du transport.\n", orderNumber, OSTimeGet() - startTime);

		free(time);

		// POST FOR TWO ROBOTS
		err = OSSemPost(sem_transport_done);
		errMsg(err, "Error while trying to post sem_transport_done");

		err = OSSemPost(sem_transport_done);
		errMsg(err, "Error while trying to post sem_transport_done");

		orderNumber++;

	}
}
void controller(void* data)
{
INT8U err;
	int startTime = 0;
	int randomTime = 0;
	int *a_prep_time;
	int *b_prep_time;
	int *transport_time;
	printf("TACHE CONTROLLER @ %d : DEBUT. \n", OSTimeGet() - startTime);
	for(int i = 1 ; i < 11; i++)
	{	

		//Création d'une commande
		a_prep_time = malloc(sizeof(int));
		b_prep_time = malloc(sizeof(int));
		transport_time = malloc(sizeof(int));

		*a_prep_time = (rand() % 8 + 3) * 10;
		*b_prep_time = (rand() % 8 + 6) * 10;
		*transport_time = (rand() % 6 + 9) * 10;

		printf("TACHE CONTROLLER @ %d : COMMANDE #%d. \n prep time A = %d, prep time B = %d, Transport time = %d\n", OSTimeGet() - startTime, i, *a_prep_time, *b_prep_time, *transport_time);

		//À compléter
		err = OSQPost(q_prep_A, (void *)a_prep_time);
		errMsg(err, "Error while trying to post to q_prep_A.");

		err = OSQPost(q_prep_B, (void *)b_prep_time);
		errMsg(err, "Error while trying to post to q_prep_B.");

		err =OSQPost(q_transport, (void *)transport_time);
		errMsg(err, "Error while trying to post to q_transport.");
		
		// Délai aléatoire avant nouvelle commande
		randomTime = (rand() % 9 + 5) * 10;
		OSTimeDly(randomTime);
	}
}

int	readCurrentTotalPrepTime()
{
	OSTimeDly(2);
	return total_prep_time;
}
void writeCurrentTotalPrepTime(int newCount)
{
	OSTimeDly(2);
	total_prep_time = newCount;
}

void errMsg(INT8U err, char* errMsg)
{
	if (err != OS_ERR_NONE)
	{
		printf(errMsg);
		exit(1);
	}
}
