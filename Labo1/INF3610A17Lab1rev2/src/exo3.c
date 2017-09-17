/*
*********************************************************************************************************
*                                                 uC/OS-II
*                                          The Real-Time Kernel
*                                               PORT Windows
*
*
*            					Arnaud Desaulty, Fr�d�ric Fortier, Eva Terriault
*								  Ecole Polytechnique de Montreal, QC, CANADA
*                                                  08/2017
*
* File : exo3.c
* 
*********************************************************************************************************
*/

// Main include of �C-II
#include "includes.h"
/*
*********************************************************************************************************
*                                              CONSTANTS
*********************************************************************************************************
*/

#define TASK_STK_SIZE       16384            // Size of each task's stacks (# of WORDs)

#define ROBOT_A_PRIO   		10				 // Defining Priority of each task
#define ROBOT_B_PRIO   		9
#define CONTROLLER_PRIO     7
#define TRANSPORT_PRIO		8

#define TIME_OP_PRIO		6
#define COMMANDS_PRIO		5

#define FLAG_ATOB			0x10
#define FLAG_DONE			0x8
#define FLAG_ROBOTB			0x4
#define FLAG_ROBOTA			0x2
#define FLAG_READY			0x1

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
volatile int total_prep_time = 0;

volatile int commands_left = 0;

OS_FLAG_GRP* sync_flags;
OS_EVENT* mutex_time_op;
OS_EVENT* mutex_commands;

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

	// � compl�ter

	OSInit();

	err = (OSTaskCreate(*controller, NULL, &controllerStk[TASK_STK_SIZE - 1], CONTROLLER_PRIO));
	errMsg(err, "Error lors de la cr�ation de la t�che du contr�leur.");

	err = (OSTaskCreate(*prep_robot_A, NULL, &prepRobotAStk[TASK_STK_SIZE - 1], ROBOT_A_PRIO));
	errMsg(err, "Error lors de la cr�ation de la t�che de pr�paration du robot A.");



	err = (OSTaskCreate(*prep_robot_B, NULL, &prepRobotBStk[TASK_STK_SIZE - 1], ROBOT_B_PRIO));
	errMsg(err, "Error lors de la cr�ation de la t�che de pr�paration du robot B.");


	err = (OSTaskCreate(*transport, NULL, &transportStk[TASK_STK_SIZE - 1], TRANSPORT_PRIO));
	errMsg(err, "Error lors de la cr�ation de la t�che du transport.");

	sync_flags = OSFlagCreate(FLAG_DONE, &err);
	errMsg(err, "Error lors de la cr�ation du groupe de drapeaux d'�v�nements");

	mutex_time_op = OSMutexCreate(TIME_OP_PRIO, &err);
	errMsg(err, "Error lors de la cr�ation du mutex de lecture/�criture du temps.");

	mutex_commands = OSMutexCreate(COMMANDS_PRIO, &err);
	errMsg(err, "Error lors de la cr�ation du mutex de lecture/�criture du nombre de commandes.");


	OSStart();
	
    return;
}

/*
*********************************************************************************************************
*                                            TASK FUNCTIONS
*********************************************************************************************************
*/


/*
REMINDER FOR FLAG BITS :	DONE	ROBOTB	ROBOTA	READY
			(7 TO 4 UNUSED)	3		2		1		0
*/

void prep_robot_A(void* data)
{
	INT8U err;
	int startTime = 0;
	int orderNumber = 1;
	printf("TACHE PREP_ROBOT_A @ %d : DEBUT.\n", OSTimeGet() - startTime);
	while (1)
	{

		// � AJOUTER : ATTENDRE QUE LE CONTR�LEUR ENVOIE UNE COMMANDE ET QUE LE TRANSPORT SOIT TERMIN�
		OSFlagPend(sync_flags, FLAG_DONE + FLAG_READY, OS_FLAG_WAIT_SET_ALL, 0, &err);
		errMsg(err, "Error while trying to access sync_flags");

		OS_FLAGS flags = OSFlagPendGetFlagsRdy();

		OSFlagPost(sync_flags, FLAG_DONE, OS_FLAG_CLR, &err);
		errMsg(err, "Error while trying to access sync_flags");
		
		OSFlagPost(sync_flags, FLAG_ATOB, OS_FLAG_SET, &err);
		errMsg(err, "Error while trying to access sync_flags");

		printf("TACHE PREP_ROBOT_A COMMANDE #%d @ %d : D�but pr�paration robot A.\n", orderNumber, OSTimeGet() - startTime);
		OSTimeDly(40);
		printf("TACHE PREP_ROBOT_A COMMANDE #%d @ %d : Fin pr�paration robot A.\n", orderNumber, OSTimeGet() - startTime);

		OSMutexPend(mutex_time_op, 0, &err);
		errMsg(err, "Error while trying to access mutex_time_op");

		writeCurrentTotalPrepTime(readCurrentTotalPrepTime() + 40);

		err = OSMutexPost(mutex_time_op);
		errMsg(err, "Error while trying to post mutex_time_op");

		// � AJOUTER : LEVER UN BIT SUR LE FLAG POUR INDIQUER QUE LE ROBOT A EST PR�T
		OSFlagPost(sync_flags, FLAG_ROBOTA, OS_FLAG_SET, &err);
		errMsg(err, "Error while trying to access sync_flags");

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

		OSFlagPend(sync_flags, FLAG_ATOB, OS_FLAG_WAIT_SET_ALL, 0, &err);
		errMsg(err, "Error while trying to access sync_flags");

		OSFlagPost(sync_flags, FLAG_ATOB, OS_FLAG_CLR, &err);
		errMsg(err, "Error while trying to access sync_flags");

		printf("TACHE PREP_ROBOT_B COMMANDE #%d @ %d : D�but pr�paration robot B.\n", orderNumber, OSTimeGet() - startTime);
		OSTimeDly(60);
		printf("TACHE PREP_ROBOT_B COMMANDE #%d @ %d : Fin pr�paration robot B.\n", orderNumber, OSTimeGet() - startTime);

		OSMutexPend(mutex_time_op, 0, &err);
		errMsg(err, "Error while trying to access mutex_time_op");

		writeCurrentTotalPrepTime(readCurrentTotalPrepTime() + 60);

		err = OSMutexPost(mutex_time_op);
		errMsg(err, "Error while trying to post mutex_time_op");

		// � AJOUTER : LEVER UN BIT SUR LE FLAG POUR INDIQUER QUE LE ROBOT B EST PR�T
		OSFlagPost(sync_flags, FLAG_ROBOTB, OS_FLAG_SET, &err);
		errMsg(err, "Error while trying to access sync_flags");

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
		// � AJOUTER : ATTENDRE QUE LES DEUX BITS PROVENANT DES ROBOTS SOIENT LEV�S
		OSFlagPend(sync_flags, FLAG_ROBOTA + FLAG_ROBOTB, OS_FLAG_WAIT_SET_ALL, 0, &err);
		errMsg(err, "Error while trying to access sync_flags");
		OSFlagPost(sync_flags, FLAG_ROBOTA + FLAG_ROBOTB, OS_FLAG_CLR, &err);
		errMsg(err, "Error while trying to access sync_flags");
		

		printf("TACHE TRANSPORT COMMANDE #%d @ %d : D�but transport.\n", orderNumber, OSTimeGet() - startTime);
		OSTimeDly(150);
		printf("TACHE TRANSPORT COMMANDE #%d @ %d : Fin du transport.\n", orderNumber, OSTimeGet() - startTime);

		// � AJOUTER : D�CR�MENTER LE COMPTEUR GLOBAL DE COMMANDES RESTANTES
		OSMutexPend(mutex_commands, 0, &err);
		errMsg(err, "Error while trying to access mutex_commands");
		commands_left--;
		if (!commands_left) {
			OSFlagPost(sync_flags, FLAG_READY, OS_FLAG_CLR, &err);
			errMsg(err, "Error while trying to access sync_flags");
		}
		err = OSMutexPost(mutex_commands);
		errMsg(err, "Error while trying to post mutex_commands");

		// � AJOUTER : LEVER UN BIT SUR LE FLAG POUR INDIQUER QUE LE TRANSPORT EST TERMIN�
		OSFlagPost(sync_flags, FLAG_DONE, OS_FLAG_SET, &err);
		errMsg(err, "Error while trying to access sync_flags");
		
		
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

		// � AJOUTER : LEVER UN BIT SUR LE FLAG POUR INDIQUER QU'UNE COMMANDE EST PR�TE
		OSFlagPost(sync_flags, FLAG_READY, OS_FLAG_SET, &err);
		errMsg(err, "Error while trying to access sync_flags");
		// � AJOUTER : INCR�MENTER LE COMPTEUR GLOBAL DE COMMANDES RESTANTES
		OSMutexPend(mutex_commands, 0, &err);
		errMsg(err, "Error while trying to access mutex_commands");
		commands_left++;
		err = OSMutexPost(mutex_commands);
		errMsg(err, "Error while trying to post mutex_commands");
		
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


