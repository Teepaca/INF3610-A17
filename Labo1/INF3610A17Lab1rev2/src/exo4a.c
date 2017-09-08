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
*                                             STRUCTURES
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                                  MAIN
*********************************************************************************************************
*/

void main(void)
{
	UBYTE err;

	//À compléter
	
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
		printf("TACHE PREP_ROBOT_A COMMANDE #%d @ %d : Début préparation robot A.\n", orderNumber, OSTimeGet() - startTime);
		OSTimeDly(*robotAPrepTime);
		printf("TACHE PREP_ROBOT_A COMMANDE #%d @ %d : fin préparation robot A.\n", orderNumber, OSTimeGet() - startTime);

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
		printf("TACHE PREP_ROBOT_B COMMANDE #%d @ %d : Début préparation robot B.\n", orderNumber, OSTimeGet() - startTime);
		OSTimeDly(*robotBPrepTime);
		printf("TACHE PREP_ROBOT_B COMMANDE #%d @ %d : Fin préparation robot B.\n", orderNumber, OSTimeGet() - startTime);

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
		printf("TACHE TRANSPORT COMMANDE #%d @ %d : Début transport.\n", orderNumber, OSTimeGet() - startTime);
		OSTimeDly(*time);
		printf("TACHE TRANSPORT COMMANDE #%d @ %d : Fin du transport.\n", orderNumber, OSTimeGet() - startTime);

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
