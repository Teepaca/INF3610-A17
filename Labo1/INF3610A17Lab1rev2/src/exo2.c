/*
*********************************************************************************************************
*                                                 uC/OS-II
*                                          The Real-Time Kernel
*                                               PORT Windows
*
*
*            		          	Arnaud Desaulty, Frederic Fortier, Eva Terriault
*                                  Ecole Polytechnique de Montreal, Qc, CANADA
*                                                  08/2017
*
* File : exo2.c
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
OS_EVENT* sem_controller_to_robot_A;
OS_EVENT* sem_robot_A_to_robot_B;
OS_EVENT* sem_prep_to_transport;
OS_EVENT* sem_transport_done;
OS_EVENT* mutex_time_op;

volatile int total_prep_time = 0;

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

	
	if (!(sem_controller_to_robot_A = OSSemCreate(0))) {
		printf("Erreur lors de la création du sémaphore du robot A.");
		exit(1);
	}


	if (!(sem_robot_A_to_robot_B = OSSemCreate(0))) {
		printf("Erreur lors de la création du sémaphore du robot B.");
		exit(1);
	}

	if (!(sem_prep_to_transport = OSSemCreate(0))) {
		printf("Erreur lors de la création du sémaphore de transport prêt.");
		exit(1);
	}

	if (!(sem_transport_done = OSSemCreate(1))) {
		printf("Erreur lors de la création du sémaphore de transport terminé.");
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
	printf("TACHE PREP_ROBOT_A @ %d : DEBUT.\n", OSTimeGet() - startTime);
	while (1)
	{
		
		OSSemPend(sem_transport_done, 0, &err);
		errMsg(err, "Error while trying to access sem_transport_done");

		OSSemPend(sem_controller_to_robot_A, 0, &err);
		errMsg(err, "Error while trying to access sem_controller_to_robot_A");
		
		err = OSSemPost(sem_robot_A_to_robot_B);
		errMsg(err, "Error while trying to post sem_controller_to_robot_B");

		printf("TACHE PREP_ROBOT_A COMMANDE #%d @ %d : Début préparation robot A.\n", orderNumber, OSTimeGet() - startTime);
		OSTimeDly(40);
		printf("TACHE PREP_ROBOT_A COMMANDE #%d @ %d : fin préparation robot A.\n", orderNumber, OSTimeGet() - startTime);

		OSMutexPend(mutex_time_op, 0, &err);
		errMsg(err, "Error while trying to access mutex_time_op");

		writeCurrentTotalPrepTime(readCurrentTotalPrepTime() + 40);

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
	printf("TACHE PREP_ROBOT_B @ %d : DEBUT. \n", OSTimeGet() - startTime);
	while (1)
	{
		OSSemPend(sem_robot_A_to_robot_B, 0, &err);
		errMsg(err, "Error while trying to access sem_controller_to_robot_B");

		printf("TACHE PREP_ROBOT_B COMMANDE #%d @ %d : Début préparation robot B.\n", orderNumber, OSTimeGet() - startTime);
		OSTimeDly(60);
		printf("TACHE PREP_ROBOT_B COMMANDE #%d @ %d : Fin préparation robot B.\n", orderNumber, OSTimeGet() - startTime);

		OSMutexPend(mutex_time_op, 0, &err);
		errMsg(err, "Error while trying to access mutex_time_op");

		writeCurrentTotalPrepTime(readCurrentTotalPrepTime() + 60);

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
	printf("TACHE TRANSPORT @ %d : DEBUT. \n", OSTimeGet() - startTime);
	while (1)
	{

		// WAIT FOR TWO READY ROBOTS
		OSSemPend(sem_prep_to_transport, 0, &err);
		errMsg(err, "Error while trying to post sem_prep_to_transport");

		OSSemPend(sem_prep_to_transport, 0, &err);
		errMsg(err, "Error while trying to post sem_prep_to_transport");

		printf("TEMPS TOTAL DE PRÉPARATION ÉCOULÉ %d.\n", readCurrentTotalPrepTime());

		printf("TACHE TRANSPORT COMMANDE #%d @ %d : Début transport.\n", orderNumber, OSTimeGet() - startTime);
		OSTimeDly(150);
		printf("TACHE TRANSPORT COMMANDE #%d @ %d : Fin du transport.\n", orderNumber, OSTimeGet() - startTime);

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
	printf("TACHE CONTROLLER @ %d : DEBUT. \n", OSTimeGet() - startTime);
	for(int i = 1 ; i < 11; i++)
	{	
		randomTime = (rand() % 9 + 5)*10;
		OSTimeDly(randomTime);

		printf("TACHE CONTROLLER @ %d : COMMANDE #%d. \n", OSTimeGet() - startTime, i);
		
		err = OSSemPost(sem_controller_to_robot_A);
		errMsg(err, "Error while trying to post sem_controller_to_robot_A");

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


