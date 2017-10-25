#include "routeur.h"
#include "bsp_init.h"
#include "platform.h"
#include <stdlib.h>
#include <stdbool.h>
#include <xil_printf.h>
#include <xgpio.h>

///////////////////////////////////////////////////////////////////////////////////////
//								uC-OS global variables
///////////////////////////////////////////////////////////////////////////////////////
#define TASK_STK_SIZE 8192
PRINT_PARAM print_param[3];

/*DÉCLARATION DES EVENTS*/
/* ************************************************
 *                  Mailbox
 **************************************************/

OS_EVENT *mbox[3];

/* ************************************************
 *                  Queues
 **************************************************/

OS_EVENT *inputQ;
OS_EVENT *lowQ;
OS_EVENT *mediumQ;
OS_EVENT *highQ;

/* ************************************************
 *                  Semaphores
 **************************************************/

/* À compléter */

OS_EVENT* semStop;
OS_EVENT* semReset;
OS_EVENT* semStats;

/* ************************************************
 *                  Mutexes
 **************************************************/
/* À compléter */

OS_EVENT* mutexPacketCrees;
OS_EVENT* mutexPacketTraites;
OS_EVENT* mutexPacketSourceRejete;
OS_EVENT* mutexRunning;
OS_EVENT* mutexPrinting;
OS_EVENT* mutexMemory;

/*DECLARATION DES COMPTEURS*/
int nbPacketCrees = 0; // Nb de packets total créés
int nbPacketTraites = 0;	// Nb de paquets envoyés sur une interface
int nbPacketSourceRejete = 0; // Nb de packets rejetés pour mauvaise source

/*BOOLEEN POUR ARRET DU ROUTEUR*/
uint8_t running = 1; // 0 = STOPPED, 1 = RUNNING


///////////////////////////////////////////////////////////////////////////////////////
//								Routines d'interruptions
///////////////////////////////////////////////////////////////////////////////////////

void timer_isr(void* not_valid) {
	if (private_timer_irq_triggered()) {
		private_timer_clear_irq();
		OSTimeTick();
	}
}

void fit_timer_1s_isr(void *not_valid) {
	/* À compléter */
	uint8_t err;
	err = OSSemPost(semStop);
	err_msg("semStop", err);

}

void fit_timer_3s_isr(void *not_valid) {
	/* À compléter */
	uint8_t err;
	err = OSSemPost(semStats);
	err_msg("semStats", err);

}

void gpio_isr(void * not_valid) {
	/* À compléter */
	OSSemPost(semReset);
	XGpio_InterruptClear(&gpSwitch, 0xFFFFFFFF);
}

///////////////////////////////////////////////////////////////////////////////////////
//								uC/OS-II part
///////////////////////////////////////////////////////////////////////////////////////
int main() {

	initialize_bsp();

	// Initialize uC/OS-II
	OSInit();

	create_application();

	prepare_and_enable_irq();

	xil_printf("*** Starting uC/OS-II scheduler ***\n");

	OSStart();

	cleanup();
	cleanup_platform();

	return 0;
}

void create_application() {
	int error;

	error = create_tasks();
	if (error != 0)
		xil_printf("Error %d while creating tasks\n", error);

	error = create_events();
	if (error != 0)
		xil_printf("Error %d while creating events\n", error);
}

int create_tasks() {
	// Stacks des tâches
	static OS_STK TaskReceiveStk[TASK_STK_SIZE];
	static OS_STK TaskStopStk[TASK_STK_SIZE];
	static OS_STK TaskResetStk[TASK_STK_SIZE];
	static OS_STK TaskStatsStk[TASK_STK_SIZE];
	static OS_STK TaskComputeStk[TASK_STK_SIZE];
	static OS_STK TaskForwardingStk[TASK_STK_SIZE];
	static OS_STK TaskPrint1Stk[TASK_STK_SIZE];
	static OS_STK TaskPrint2Stk[TASK_STK_SIZE];
	static OS_STK TaskPrint3Stk[TASK_STK_SIZE];

	/* À compléter */

	uint8_t err;

	if ((err = (OSTaskCreate(TaskGeneratePacket, NULL, &TaskReceiveStk[TASK_STK_SIZE-1], TASK_GENERATE_PRIO))) != OS_NO_ERR) {
		xil_printf("Error when creating task : TaskGeneratePacket");
	}

	if ((err = (OSTaskCreate(TaskStop, NULL, &TaskStopStk[TASK_STK_SIZE-1], TASK_STOP_PRIO))) != OS_NO_ERR) {
		xil_printf("Error when creating task : TaskStop");
	}

	if ((err = (OSTaskCreate(TaskReset, NULL, &TaskResetStk[TASK_STK_SIZE-1], TASK_RESET_PRIO))) != OS_NO_ERR) {
		xil_printf("Error when creating task : TaskReset");
	}

	if ((err = (OSTaskCreate(TaskStats, NULL, &TaskStatsStk[TASK_STK_SIZE-1], TASK_STATS_PRIO))) != OS_NO_ERR) {
		xil_printf("Error when creating task : TaskStats");
	}

	if ((err = (OSTaskCreate(TaskComputing, NULL, &TaskComputeStk[TASK_STK_SIZE-1], TASK_COMPUTING_PRIO))) != OS_NO_ERR) {
		xil_printf("Error when creating task : TaskCompute");
	}

	if ((err = (OSTaskCreate(TaskForwarding, NULL, &TaskForwardingStk[TASK_STK_SIZE-1], TASK_FORWARDING_PRIO))) != OS_NO_ERR) {
		xil_printf("Error when creating task : TaskForwarding");
	}

	if ((err = (OSTaskCreate(TaskPrint, &print_param[0], &TaskPrint1Stk[TASK_STK_SIZE-1], TASK_PRINT1_PRIO))) != OS_NO_ERR) {
		xil_printf("Error when creating task : TaskPrint (1)");
	}

	if ((err = (OSTaskCreate(TaskPrint, &print_param[1], &TaskPrint2Stk[TASK_STK_SIZE-1], TASK_PRINT2_PRIO))) != OS_NO_ERR) {
		xil_printf("Error when creating task : TaskPrint (2)");
	}

	if ((err = (OSTaskCreate(TaskPrint, &print_param[2], &TaskPrint3Stk[TASK_STK_SIZE-1], TASK_PRINT3_PRIO))) != OS_NO_ERR) {
		xil_printf("Error when creating task : TaskPrint (3)");
	}


	return 0;
}

int create_events() {
	uint8_t err;

	// Buffers pour les files
	static void* inputMsg[1024];
	static void* lowMsg[1024];
	static void* mediumMsg[1024];
	static void* highMsg[1024];

	/* À compléter: création des files, mailbox, sémaphores et mutex */

	if (!(inputQ = OSQCreate(&inputMsg[0], 1024))) {
		xil_printf("Error when creating queue : inputQ");
	}

	if (!(lowQ = OSQCreate(&lowMsg[0], 1024))) {
		xil_printf("Error when creating queue : lowQ");
	}

	if (!(mediumQ = OSQCreate(&mediumMsg[0], 1024))) {
		xil_printf("Error when creating queue : mediumQ");
	}

	if (!(highQ = OSQCreate(&highMsg[0], 1024))) {
		xil_printf("Error when creating queue : highQ");
	}

	for (uint8_t i = 0; i < 3; i++){
		if (!(mbox[i] = OSMboxCreate(NULL))) {
			xil_printf("Error when creating mailbox : mbox[%d]", i);
		}
		else {
			print_param[i].Mbox = mbox[i];
			print_param[i].interfaceID = i+1;
		}
	}

	if (!(semStop = OSSemCreate(0))) {
		xil_printf("Error when creating semaphore : semStop");
	}

	if (!(semReset = OSSemCreate(0))) {
		xil_printf("Error when creating semaphore : semReset");
	}

	if (!(semStats = OSSemCreate(0))) {
		xil_printf("Error when creating semaphore : semStats");
	}

	mutexPacketCrees = OSMutexCreate(MUTEX_PCREES_PRIO, &err);
	err_msg("mutexPacketCrees", err);

	mutexPacketTraites = OSMutexCreate(MUTEX_PTRAITES_PRIO, &err);
	err_msg("mutexPacketTraites", err);

	mutexPacketSourceRejete = OSMutexCreate(MUTEX_PSOURCEREJETE_PRIO, &err);
	err_msg("mutexPacketSourceRejete", err);

	mutexRunning = OSMutexCreate(MUTEX_RUNNING_PRIO, &err);
	err_msg("mutexRunning", err);

	mutexPrinting = OSMutexCreate(MUTEX_PRINTING_PRIO, &err);
	err_msg("mutexPrinting", err);

	mutexMemory = OSMutexCreate(MUTEX_MEMORY_PRIO, &err);
	err_msg("mutexMemory", err);

	return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
//								uC/OS-II part
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
//									TASKS
///////////////////////////////////////////////////////////////////////////////////////

/*
 *********************************************************************************************************
 *											  TaskGeneratePacket
 *  - Génère des paquets et les envoie dans la InputQ.
 *  - À des fins de développement de votre application, vous pouvez *temporairement* modifier la variable
 *    "shouldSlowthingsDown" à true pour ne générer que quelques paquets par seconde, et ainsi pouvoir
 *    déboguer le flot de vos paquets de manière plus saine d'esprit. Cependant, la correction sera effectuée
 *    avec cette variable à false.
 *********************************************************************************************************
 */
void TaskGeneratePacket(void *data) {
	srand(42);
	uint8_t err;
	bool isGenPhase = true; 		//Indique si on est dans la phase de generation ou non
	const bool shouldSlowThingsDown = false;		//Variable à modifier
	int packGenQty = (rand() % 250);
	while(true) {
		if (isGenPhase) {

			Packet *packet = malloc(sizeof(Packet));

			packet->src = rand() * (UINT32_MAX/RAND_MAX);
			packet->dst = rand() * (UINT32_MAX/RAND_MAX);
			packet->type = rand() % NB_PACKET_TYPE;

			for (int i = 0; i < ARRAY_SIZE(packet->data); ++i)
				packet->data[i] = (unsigned int)rand();
			packet->data[0] = nbPacketCrees;

			OSMutexPend(mutexPacketCrees, 0, &err);
			err_msg("Pend mutexPacketCrees", err);
			nbPacketCrees++;
			err = OSMutexPost(mutexPacketCrees);
			err_msg("Post mutexPacketCrees", err);

			if (shouldSlowThingsDown) {
				OSMutexPend(mutexPrinting, 0, &err);
				err_msg("Pend mutexPrinting", err);
				xil_printf("GENERATE : ********Génération du Paquet # %d ******** \n", nbPacketCrees);
				xil_printf("ADD %x \n", packet);
				xil_printf("	** src : %x \n", packet->src);
				xil_printf("	** dst : %x \n", packet->dst);
				xil_printf("	** type : %d \n", packet->type);
				err = OSMutexPost(mutexPrinting);
				err_msg("Post mutexPrinting", err);
			}

			err = OSQPost(inputQ,  packet);

			if (err == OS_ERR_Q_FULL) {
				OSMutexPend(mutexPrinting, 0, &err);
				err_msg("Pend mutexPrinting", err);
				xil_printf("GENERATE: Paquet rejeté a l'entrée car la FIFO est pleine !\n");
				err = OSMutexPost(mutexPrinting);
				err_msg("Post mutexPrinting", err);

				OSMutexPend(mutexMemory, 0, &err);
				err_msg("Pend mutexMemory", err);
				free(packet);
				err = OSMutexPost(mutexMemory);
				err_msg("Post mutexMemory", err);
			}

			if (shouldSlowThingsDown) {
				OSTimeDlyHMSM(0,0,0, 200 + rand() % 600);
			} else {
				OSTimeDlyHMSM(0, 0, 0, 2);

				if ((nbPacketCrees % packGenQty) == 0) //On genère jusqu'à 250 paquets par phase de géneration
				{
					isGenPhase = false;
				}
			}
		}
		else
		{
			OSTimeDlyHMSM(0, 0, 0, 500);
			isGenPhase = true;
			packGenQty = (rand() % 250);
			OSMutexPend(mutexPrinting, 0, &err);
			err_msg("Pend mutexPrinting", err);
			xil_printf("GENERATE: Génération de %d paquets durant les %d prochaines millisecondes\n", packGenQty, packGenQty*2);
			err = OSMutexPost(mutexPrinting);
			err_msg("Post mutexPrinting", err);
		}
	}
}

/*
 *********************************************************************************************************
 *											  TaskStop
 *  -Stoppe le routeur une fois que 100 paquets ont été rejetés pour mauvais CRC
 *  -Ne doit pas stopper la tâche d'affichage des statistiques.
 *********************************************************************************************************
 */
void TaskStop(void *data) {
	uint8_t err;
	while(true) {
		/* À compléter */
		OSSemPend(semStop, 0, &err);

		err_msg("semStop", err);
		OSMutexPend(mutexPacketSourceRejete, 0, &err);
		err_msg("Pend mutexPacketSourceRejete", err);
		if (nbPacketSourceRejete >= 10) {
			if (!(err = OSTaskSuspend(TASK_GENERATE_PRIO)) != OS_NO_ERR) {
				err_msg("TaskSuspend GENERATE", err);
			}
			if (!(err = OSTaskSuspend(TASK_COMPUTING_PRIO)) != OS_NO_ERR) {
				err_msg("TaskSuspend COMPUTING", err);
			}
			if (!(err = OSTaskSuspend(TASK_FORWARDING_PRIO)) != OS_NO_ERR) {
				err_msg("TaskSuspend FORWARDING", err);
			}
			if (!(err = OSTaskSuspend(TASK_PRINT1_PRIO)) != OS_NO_ERR) {
				err_msg("TaskSuspend PRINT1", err);
			}
			if (!(err = OSTaskSuspend(TASK_PRINT2_PRIO)) != OS_NO_ERR) {
				err_msg("TaskSuspend PRINT2", err);
			}
			if (!(err = OSTaskSuspend(TASK_PRINT3_PRIO)) != OS_NO_ERR) {
				err_msg("TaskSuspend PRINT3", err);
			}

			OSMutexPend(mutexRunning, 0, &err);
			err_msg("Pend mutexRunning", err);
			running = 0;
			err = OSMutexPost(mutexRunning);
			err_msg("Post mutexRunning", err);
		}
		err = OSMutexPost(mutexPacketSourceRejete);
		err_msg("Post mutexPacketSourceRejete", err);

	}
}

/*
 *********************************************************************************************************
 *											  TaskReset
 *  -Remet le compteur de mauvaises sources à 0
 *  -Si le routeur était arrêté, le redémarre
 *********************************************************************************************************
 */
void TaskReset(void *data) {
	uint8_t err;
	while(true) {
		/* À compléter */
		OSSemPend(semReset, 0, &err);
		err_msg("semReset", err);
		OSMutexPend(mutexPacketSourceRejete, 0, &err);
		err_msg("Pend mutexPacketSourceRejete", err);
		nbPacketSourceRejete = 0;

		OSMutexPend(mutexRunning, 0, &err);
		err_msg("Pend mutexRunning", err);
		if (!running) {
			if ((err = OSTaskResume(TASK_GENERATE_PRIO)) != OS_NO_ERR) {
				err_msg("ResumeGenerate TaskReset", err);
			}
			if ((err = OSTaskResume(TASK_PRINT1_PRIO)) != OS_NO_ERR) {
				err_msg("ResumePrint1 TaskReset", err);
			}
			if ((err = OSTaskResume(TASK_PRINT2_PRIO)) != OS_NO_ERR) {
				err_msg("ResumePrint2 TaskReset", err);
			}
			if ((err = OSTaskResume(TASK_PRINT3_PRIO)) != OS_NO_ERR) {
				err_msg("ResumePrint3 TaskReset", err);
			}
			if ((err = OSTaskResume(TASK_COMPUTING_PRIO)) != OS_NO_ERR) {
				err_msg("ResumeComputing TaskReset", err);
			}
			if ((err = OSTaskResume(TASK_FORWARDING_PRIO)) != OS_NO_ERR) {
				err_msg("ResumeForwarding TaskReset", err);
			}

			OSMutexPend(mutexPrinting, 0, &err);
			err_msg("Pend mutexPrinting", err);
			xil_printf("RESUMING STOPPED TASKS\n");
			err = OSMutexPost(mutexPrinting);
			err_msg("Post mutexPrinting", err);
			running = 1;

		}
		OSMutexPend(mutexPrinting, 0, &err);
		err_msg("Pend mutexPrinting", err);
		xil_printf("CLEARING REJECTED PACKET COUNT\n");
		err = OSMutexPost(mutexPrinting);
		err_msg("Post mutexPrinting", err);
		err = OSMutexPost(mutexRunning);
		err_msg("Post mutexRunning", err);
		err = OSMutexPost(mutexPacketSourceRejete);
		err_msg("Post mutexPacketSourceRejete", err);

	}
}

/*
 *********************************************************************************************************
 *											  TaskComputing
 *  -Vérifie si les paquets sont conformes (CRC,Adresse Source)
 *  -Dispatche les paquets dans des files (HIGH,MEDIUM,LOW)
 *
 *********************************************************************************************************
 */
void TaskComputing(void *pdata) {
	uint8_t err;
	Packet *packet = NULL;
	int waitCnt = 220000;
	while(true){
		/* À compléter */
		packet = OSQPend(inputQ, 0, &err);
		err_msg("inputQ", err);

		while (--waitCnt); // Attente active
		waitCnt = 220000;

		if ((packet->src >= REJECT_LOW1 && packet->src <= REJECT_HIGH1)|
			(packet->src >= REJECT_LOW2 && packet->src <= REJECT_HIGH2)|
			(packet->src >= REJECT_LOW3 && packet->src <= REJECT_HIGH3)|
			(packet->src >= REJECT_LOW4 && packet->src <= REJECT_HIGH4)){

			OSMutexPend(mutexPacketSourceRejete, 0, &err);
			err_msg("Pend mutexPacketSourceRejete", err);
			nbPacketSourceRejete++;
			err = OSMutexPost(mutexPacketSourceRejete);
			err_msg("Post mutexPacketSourceRejete", err);

			OSMutexPend(mutexMemory, 0, &err);
			err_msg("Pend mutexMemory", err);
			free(packet);
			err = OSMutexPost(mutexMemory);
			err_msg("Post mutexMemory", err);
		}
		else if (packet->type == PACKET_VIDEO) {
			err = OSQPost(highQ, packet);
			if (err == OS_ERR_Q_FULL){
				OSMutexPend(mutexMemory, 0, &err);
				err_msg("Pend mutexMemory", err);
				free(packet);
				err = OSMutexPost(mutexMemory);
				err_msg("Post mutexMemory", err);
				err = OSMutexPost(mutexPrinting);
				err_msg("Post mutexPrinting", err);
				xil_printf("WARNING: video packet rejected, queue is full!\n");
				err = OSMutexPost(mutexPrinting);
				err_msg("Post mutexPrinting", err);

			}
			else if (err != OS_NO_ERR) {
				err_msg("highQ", err);
			}
			else {
				OSMutexPend(mutexPacketTraites, 0, &err);
				err_msg("Pend mutexPacketTraites", err);
				nbPacketTraites++;
				err = OSMutexPost(mutexPacketTraites);
				err_msg("Post mutexPacketTraites", err);
			}
		}
		else if (packet->type == PACKET_AUDIO) {
			err = OSQPost(mediumQ, packet);
			if (err == OS_ERR_Q_FULL){
				OSMutexPend(mutexMemory, 0, &err);
				err_msg("Pend mutexMemory", err);
				free(packet);
				err = OSMutexPost(mutexMemory);
				err_msg("Post mutexMemory", err);
				err = OSMutexPost(mutexPrinting);
				err_msg("Post mutexPrinting", err);
				xil_printf("WARNING: audio packet rejected, queue is full!\n");
				err = OSMutexPost(mutexPrinting);
				err_msg("Post mutexPrinting", err);
			}
			else if (err != OS_NO_ERR) {
				err_msg("mediumQ", err);
			}
			else {
				OSMutexPend(mutexPacketTraites, 0, &err);
				err_msg("Pend mutexPacketTraites", err);
				nbPacketTraites++;
				err = OSMutexPost(mutexPacketTraites);
				err_msg("Post mutexPacketTraites", err);
			}
		}
		else if (packet->type == PACKET_AUTRE) {
			err = OSQPost(lowQ, packet);
			if (err == OS_ERR_Q_FULL){
				OSMutexPend(mutexMemory, 0, &err);
				err_msg("Pend mutexMemory", err);
				free(packet);
				err = OSMutexPost(mutexMemory);
				err_msg("Post mutexMemory", err);
				err = OSMutexPost(mutexPrinting);
				err_msg("Post mutexPrinting", err);
				xil_printf("WARNING: other packet rejected, queue is full!\n");
				err = OSMutexPost(mutexPrinting);
				err_msg("Post mutexPrinting", err);
			}
			else if (err != OS_NO_ERR) {
				err_msg("lowQ", err);
			}
			else {
				OSMutexPend(mutexPacketTraites, 0, &err);
				err_msg("Pend mutexPacketTraites", err);
				nbPacketTraites++;
				err = OSMutexPost(mutexPacketTraites);
				err_msg("Post mutexPacketTraites", err);
			}
		}
		else {
			err = OSMutexPost(mutexPrinting);
			err_msg("Post mutexPrinting", err);
			xil_printf("WARNING: Unknown packet type!\n");
			err = OSMutexPost(mutexPrinting);
			err_msg("Post mutexPrinting", err);
		}

	}
}

/*
 *********************************************************************************************************
 *											  TaskForwarding
 *  -traite la priorité des paquets : si un paquet de haute priorité est prêt,
 *   on l'envoie à l'aide de la fonction dispatch, sinon on regarde les paquets de moins haute priorité
 *********************************************************************************************************
 */
void TaskForwarding(void *pdata) {
	uint8_t err;
	Packet *packet = NULL;
	while(true){
		/* À compléter */
		packet = OSQAccept(highQ, &err);
		if (err != OS_ERR_Q_EMPTY) {
			err_msg("OSQAccept highQ", err);
		}
		if (packet == NULL) {
			packet = OSQAccept(mediumQ, &err);
			if (err != OS_ERR_Q_EMPTY) {
				err_msg("OSQAccept mediumQ", err);
			}
			if (packet == NULL) {
				packet = OSQAccept(lowQ, &err);
				if (err != OS_ERR_Q_EMPTY) {
					err_msg("OSQAccept lowQ", err);
				}
			}
		}
		if (packet != NULL) {
			if (packet->dst >= INT1_LOW && packet->dst <= INT1_HIGH) {
				err = OSMboxPost(mbox[0], packet);
				err_msg("OSMboxPost INT1", err);
			}
			else if (packet->dst >= INT2_LOW && packet->dst <= INT2_HIGH) {
				err = OSMboxPost(mbox[1], packet);
				err_msg("OSMboxPost INT2", err);
			}
			else if (packet->dst >= INT3_LOW && packet->dst <= INT3_HIGH) {
				err = OSMboxPost(mbox[2], packet);
				err_msg("OSMboxPost INT3", err);
			}
			else if (packet->dst >= INT_BC_LOW && packet->dst <= INT_BC_HIGH) {
				OSMutexPend(mutexMemory, 0, &err);
				err_msg("mutexMemory", err);
				Packet *packet2 = malloc(sizeof(Packet));
				Packet *packet3 = malloc(sizeof(Packet));
				*packet2 = *packet;
				*packet3 = *packet;
				err = OSMutexPost(mutexMemory);
				err_msg("mutexMemory", err);

				err = OSMboxPost(mbox[0], packet);
				err_msg("OSMboxPost BC", err);
				err = OSMboxPost(mbox[1], packet2);
				err_msg("OSMboxPost BC", err);
				err = OSMboxPost(mbox[2], packet3);
				err_msg("OSMboxPost BC", err);
			}
			else {
				OSMutexPend(mutexPrinting, 0, &err);
				err_msg("mutexPrinting", err);
				xil_printf("WARNING : Incorrect packet destination!\n");
				err = OSMutexPost(mutexPrinting);
				err_msg("mutexPrinting", err);
			}
		}

	}
}

/*
 *********************************************************************************************************
 *                                              TaskStats
 *  -Est déclenchée lorsque le gpio_isr() libère le sémaphore
 *  -Lorsque déclenchée, imprime les statistiques du routeur à cet instant
 *********************************************************************************************************
 */
void TaskStats(void *pdata) {
	uint8_t err;

	while(true){
		/* À compléter */
		OSSemPend(semStats, 0, &err);
		err_msg("semStats", err);

		OSMutexPend(mutexPrinting, 0, &err);
		err_msg("Pend mutexPrinting", err);

		xil_printf("\n------------------ Affichage des statistiques ------------------\n");
		xil_printf("Nb de packets total créés : %d\n",nbPacketCrees);
		xil_printf("Nb de packets total traités : %d\n", nbPacketTraites);
		xil_printf("Nb de packets rejetés pour mauvaise source : %d\n",nbPacketSourceRejete);
		err = OSMutexPost(mutexPrinting);
		err_msg("Post mutexPrinting", err);

	}
}

/*
 *********************************************************************************************************
 *											  TaskPrint
 *  -Affiche les infos des paquets arrivés à destination et libere la mémoire allouée
 *********************************************************************************************************
 */
void TaskPrint(void *data) {
	uint8_t err;
	Packet *packet = NULL;
	int intID = ((PRINT_PARAM*)data)->interfaceID;
	OS_EVENT* mb = ((PRINT_PARAM*)data)->Mbox;

	while(true){
		/* À compléter */
		packet = OSMboxPend(mb, 0, &err);
		err_msg("OSMboxPend TaskPrint", err);

		if (packet != NULL) {
			OSMutexPend(mutexPrinting, 0, &err);
			err_msg("mutexPrinting", err);
			xil_printf("INT %d - SRC %08x - DST %08x - TYPE %d - DATA %x\n", intID, packet->src, packet->dst, packet->type, packet->data);
			err = OSMutexPost(mutexPrinting);
			err_msg("mutexPrinting", err);

			OSMutexPend(mutexMemory, 0, &err);
			err_msg("mutexMemory", err);
			free(packet);
			err = OSMutexPost(mutexMemory);
			err_msg("mutexMemory", err);
		}
		else {
			OSMutexPend(mutexPrinting, 0, &err);
			err_msg("mutexPrinting", err);
			xil_printf("WARNING : NULL packet received!\n");
			err = OSMutexPost(mutexPrinting);
			err_msg("mutexPrinting", err);
		}

	}

}

void err_msg(char* entete, uint8_t err)
{
	if(err != OS_ERR_NONE) {
		xil_printf(entete);
		xil_printf(": Une erreur est retournée : code %d \n",err);
	}
}

