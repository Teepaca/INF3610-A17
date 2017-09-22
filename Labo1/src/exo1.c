/*
*********************************************************************************************************
*                                                 uC/OS-II
*                                          The Real-Time Kernel
*                                               PORT Windows
*
*
*                                     Arnaud Desault, Frédéric Fortier
*                                  École Polytechnique de Montreal, QC, CANADA
*                                                  08/2017
*
* File : exo1.c
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

#define TASK1_PRIO   		5				 // Defining Priority of each task
#define TASK2_PRIO   		7
#define TASK3_PRIO   		8
#define TASK4_PRIO   		9
#define TASK5_PRIO   		6

#define TASK1_ID    		1                // Defining Id of each task
#define TASK2_ID    		2
#define TASK3_ID    		3
#define TASK4_ID    		3
#define TASK5_ID    		3

// Nouveaux defines
#define TASK1_NEWPRIO		11
#define TASK2_NEWPRIO		10
#define TASK3_NEWPRIO		12
#define TASK4_NEWPRIO		13
#define TASK5_NEWPRIO		14

/*
*********************************************************************************************************
*                                          SHARED  VARIABLES
*********************************************************************************************************
*/

OS_STK           Task1Stk[TASK_STK_SIZE];	//Stack of each task
OS_STK           Task2Stk[TASK_STK_SIZE];	
OS_STK           Task3Stk[TASK_STK_SIZE];
OS_STK           Task4Stk[TASK_STK_SIZE];
OS_STK           Task5Stk[TASK_STK_SIZE];


/*
*********************************************************************************************************
*                                         FUNCTION PROTOTYPES
*********************************************************************************************************
*/
void    Task1(void *data);
void    Task2(void *data);
void    Task3(void *data);
void    Task4(void *data);
void    Task5(void *data);

/*
*********************************************************************************************************
*                                                  MAIN
*********************************************************************************************************
*/

void main(void)
{
	UBYTE err;

	// à compléter
	OSInit();
	
	if (err = (OSTaskCreate(*Task1, NULL, &Task1Stk[TASK_STK_SIZE - 1], TASK1_NEWPRIO)) != OS_NO_ERR) {
		printf("Error lors de la création de la tâche 1.");
		
	}

	if (err = (OSTaskCreate(*Task2, NULL, &Task2Stk[TASK_STK_SIZE - 1], TASK2_NEWPRIO)) != OS_NO_ERR) {
		printf("Error lors de la création de la tâche 2.");

	}

	if (err = (OSTaskCreate(*Task3, NULL, &Task3Stk[TASK_STK_SIZE - 1], TASK3_NEWPRIO)) != OS_NO_ERR) {
		printf("Error lors de la création de la tâche 3.");

	}

	if (err = (OSTaskCreate(*Task4, NULL, &Task4Stk[TASK_STK_SIZE - 1], TASK4_NEWPRIO)) != OS_NO_ERR) {
		printf("Error lors de la création de la tâche 4.");

	}

	if (err = (OSTaskCreate(*Task5, NULL, &Task5Stk[TASK_STK_SIZE - 1], TASK5_NEWPRIO)) != OS_NO_ERR) {
		printf("Error lors de la création de la tâche 5.");

	}

	OSStart();





	
    return;
}

/*
*********************************************************************************************************
*                                            TASK FUNCTIONS
*********************************************************************************************************
*/


void Task1(void* data)
{
	while(1)
	{
		printf("are an \n");
		OSTimeDly(10000);
	}
}

void Task2(void* data)
{
	while (1)
	{
		printf("Task priorities \n");
		OSTimeDly(10000);
	}
}

void Task3(void* data)
{
	while (1)
	{
		printf("important \n");
		OSTimeDly(10000);
	}
}

void Task4(void* data)
{
	while (1)
	{
		printf("feature \n");
		OSTimeDly(10000);
	}
}

void Task5(void* data)
{
	while (1)
	{
		printf("of MicroC-II ! \n");
		OSTimeDly(10000);
	}
}

