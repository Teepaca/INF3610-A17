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

/* ************************************************
 *                  Mutexes
 **************************************************/
/* À compléter */

/*DECLARATION DES COMPTEURS*/
int nbPacketCrees = 0; // Nb de packets total créés
int nbPacketTraites = 0;	// Nb de paquets envoyés sur une interface
int nbPacketSourceRejete = 0; // Nb de packets rejetés pour mauvaise source


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
}

void fit_timer_3s_isr(void *not_valid) {
	/* À compléter */
}

void gpio_isr(void * not_valid) {
	/* À compléter */
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

			nbPacketCrees++;

			if (shouldSlowThingsDown) {
				xil_printf("GENERATE : ********Génération du Paquet # %d ******** \n", nbPacketCrees);
				xil_printf("ADD %x \n", packet);
				xil_printf("	** src : %x \n", packet->src);
				xil_printf("	** dst : %x \n", packet->dst);
				xil_printf("	** type : %d \n", packet->type);
			}

			err = OSQPost(inputQ,  packet);

			if (err == OS_ERR_Q_FULL) {
				xil_printf("GENERATE: Paquet rejeté a l'entrée car la FIFO est pleine !\n");
				free(packet);
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
			xil_printf("GENERATE: Génération de %d paquets durant les %d prochaines millisecondes\n", packGenQty, packGenQty*2);
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
	while(true){
		/* À compléter */
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

		xil_printf("\n------------------ Affichage des statistiques ------------------\n");
		xil_printf("Nb de packets total créés : %d\n",nbPacketCrees);
		xil_printf("Nb de packets total traités : %d\n", nbPacketTraites);
		xil_printf("Nb de packets rejetés pour mauvaise source : %d\n",nbPacketSourceRejete);

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
	}

}

void err_msg(char* entete, uint8_t err)
{
	if(err != OS_ERR_NONE) {
		xil_printf(entete);
		xil_printf(": Une erreur est retournée : code %d \n",err);
	}
}
