///////////////////////////////////////////////////////////////////////////////
//
//	Sobel.cpp
//
///////////////////////////////////////////////////////////////////////////////
#include "Sobel.h"

///////////////////////////////////////////////////////////////////////////////
//
//	Constructeur
//
///////////////////////////////////////////////////////////////////////////////
Sobel::Sobel( sc_module_name name ) : sc_module(name)
/* À compléter */
{
	/*
	
	À compléter
	
	*/
	SC_THREAD(thread);
	sensitive << clk.pos();
}


///////////////////////////////////////////////////////////////////////////////
//
//	Destructeur
//
///////////////////////////////////////////////////////////////////////////////
Sobel::~Sobel()
{
	/*
	
	À compléter
	
	*/
}

unsigned int Sobel::Read(const unsigned int addr) {
	int readData = 0;
	address.write(addr);
	requestRead.write(true);
	do {
		wait(clk->posedge_event());
	} while (!ack.read());
	readData = data.read();
	requestRead.write(false);
	return readData;
}

void Sobel::Write(const unsigned int addr, const unsigned int writeData) {
	address.write(addr);
	data.write(writeData);
	requestWrite.write(true);
	do {
		wait(clk->posedge_event());
	} while (!ack.read());
	requestWrite.write(false);
}

///////////////////////////////////////////////////////////////////////////////
//
//	thread
//
///////////////////////////////////////////////////////////////////////////////
void Sobel::thread(void)
{
	/*
	
	À compléter
	
	*/
	unsigned int width = 0;
	unsigned int height = 0;
	unsigned int data = 0x00000000;
	uint8_t* image = NULL;

	while (true) {

		cout << "Lecture en cours..." << endl;

		width = Read(0);
		height = Read(4);

		image = new uint8_t[width*height]();
		for (unsigned int i = 0; i < height; i++) {
			for (unsigned int j = 0; j < width; j += 4) {
				data = Read(8 + i * width + j);
				image[i*width + j] = data & 0x000000FF;
				image[i*width + j + 1] = (data >> 8) & 0x000000FF;
				image[i*width + j + 2] = (data >> 16) & 0x000000FF;
				image[i*width + j + 3] = data >> 24;
			}
		}

		cout << "Fin de la lecture." << endl;
		cout << "Traitement et écriture en cours..." << endl;

		for (unsigned int i = 0; i < height; i++) {
			for (unsigned int j = 0; j < width; j += 4) {
				if (i == 0 || i == height - 1) {
					Write(8 + i*width + j, 0);
				}
				else {
					// ATTENTION, CETTE PARTIE PEUT PRENDRE UNE MINUTE OU DEUX (AU TOTAL) À S'EXÉCUTER EN RAISON DU WAIT.
					wait(12*4); // On attend 12 cycles d'horloge par pixel. 9 cycles sont alloués aux opérations de type MAC (multiplication-accumulation),
					// qui sont effectuées en parallèle pour les matrices X et Y (3x3 pixels). 3 cycles supplémentaires sont alloués aux opérations effectuées
					// sur edge_weight et edge_val, afin d'obtenir un flot d'exécution complètement pipeliné. Puisque l'on traite 4 pixels à la fois dans cette
					// boucle d'écriture, on multiplie l'attente par 4 pour simuler une exécution individuelle. Il serait possible de ne pas multiplier si l'on
					// supposait que la mémoire était accessible par des unités de calcul en parallèle (donc 4 blocs de 2 unités MAC; une pour X, une pour Y).
					// Toutefois, on ne croit pas qu'il soit possible pour cette mémoire de fournir des données provenant de plusieurs adresses différentes à la fois.
					Write(8 + i*width + j,
						(j != 0 ? (sobel_operator((i*width + j), width, image)) : 0) +
						(sobel_operator((i*width + j + 1), width, image) << 8) +
						(sobel_operator((i*width + j + 2), width, image) << 16) +
						(j != width - 4 ? (sobel_operator((i*width + j + 3), width, image) << 24) : 0));
				}
			}
		}

		cout << "Fin du traitement et de l'écriture." << endl;

		delete[] image;
		sc_stop();
	}


}


///////////////////////////////////////////////////////////////////////////////
//
//	sobel_operator
//
///////////////////////////////////////////////////////////////////////////////
static inline uint8_t getVal(int index, int xDiff, int yDiff, int img_width, uint8_t * Y) 
{ 
	return Y[index + (yDiff * img_width) + xDiff]; 
};

uint8_t Sobel::sobel_operator(const int index, const int imgWidth, uint8_t * image)
{
	int x_weight = 0;
	int y_weight = 0;

	unsigned edge_weight;
	uint8_t edge_val;

	const char x_op[3][3] = {	{ -1,0,1 },
								{ -2,0,2 },
								{ -1,0,1 } };

	const char y_op[3][3] = {	{ 1,2,1 },
								{ 0,0,0 },
								{ -1,-2,-1 } };

	//Compute approximation of the gradients in the X-Y direction
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j  < 3; j++) {
		// X direction gradient
		x_weight = x_weight + (getVal(index, i - 1, j - 1, imgWidth, image) * x_op[i][j]);

		// Y direction gradient
		y_weight = y_weight + (getVal(index, i - 1, j - 1, imgWidth, image) * y_op[i][j]);
		}
	}

	edge_weight = std::abs(x_weight) + std::abs(y_weight);

	edge_val = (255 - (uint8_t)(edge_weight));

	//Edge thresholding
	if (edge_val > 200)
		edge_val = 255;
	else if (edge_val < 100)
		edge_val = 0;

	return edge_val;
}


