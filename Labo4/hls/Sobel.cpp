#include "Sobel.h"
#include <string.h>

#define ABS(x)          ((x>0)? x : -x)

uint8_t sobel_operator_cache(const int col, const int row, uint8_t cache[CACHE_HEIGHT][CACHE_WIDTH])
{
#pragma HLS inline			// Inliner la fonction lui permet d'�tre "copi�e-coll�e" l� o� elle est appell�e
							// et ainsi faciliter le pipelinage de la boucle principale
	/* � compl�ter en important votre code du lab 3.
	 * � noter que la fonction peut avoir 3 signatures diff�rentes, selon vos diff�rentes modifications:
	 * uint8_t sobel_operator(const int fullIndex, uint8_t * image)
	 * uint8_t sobel_operator(const int fullIndex, uint8_t image[IMG_HEIGHT * IMG_WIDTH])
	 * uint8_t sobel_operator(const int col, const int row, uint8_t image[IMG_HEIGHT][IMG_WIDTH])
	 *
	 * Les deux premi�res sont assez �quivalentes, mais la derni�re permet d'acc�der � l'image comme un
	 * tableau 2D. Par contre, un tableau 2D doit alors lui �tre pass�, ce qui n'est pas �vident consid�rant
	 * que les entr�es de la fonction sobel_filtrer() sont 1D. Cependant, si pour une raison ou une autre
	 * un buffer-cache interm�diaire �tait utilis�, celui-ci pourrait �tre 2D...
	 */
	int x_weight = 0;
	int y_weight = 0;

	unsigned edge_weight;
	uint8_t edge_val;

	const char x_op[3][3] = { { -1,0,1 },
								{ -2,0,2 },
								{ -1,0,1 } };

	const char y_op[3][3] = { { 1,2,1 },
								{ 0,0,0 },
								{ -1,-2,-1 } };

	//Compute approximation of the gradients in the X-Y direction

	SobelX : for (int i = 0; i < 3; i++) {
//#pragma HLS unroll (le pipeline le fait)
		SobelY : for (int j = 0; j < 3; j++) {
//#pragma HLS unroll (le pipeline le fait)
			// X direction gradient
			x_weight = x_weight + cache[(col+i-1+CACHE_HEIGHT)&CACHE_MOD_MASK][row+j-1] * x_op[i][j];

			// Y direction gradient
			y_weight = y_weight + cache[(col+i-1+CACHE_HEIGHT)&CACHE_MOD_MASK][row+j-1] * y_op[i][j];
		}
	}

	edge_weight = ABS(x_weight) + ABS(y_weight);

	edge_val = (255 - (uint8_t)(edge_weight));

	//Edge thresholding
	if (edge_val > 200)
		edge_val = 255;
	else if (edge_val < 100)
		edge_val = 0;

	return edge_val;
}


void sobel_filter(uint8_t* inter_pix, unsigned int* out_pix)
{
	/* On demande � HLS de nous synth�tiser des ma�tres AXI que l'on connectera � la m�moire principale.
	 * Ainsi, le CPU n'a pas besoin de transf�rer l'image au filtre: c'est le filtre qui va chercher l'image
	 * dans la m�moire principale (DDR de la carte) et �crit le r�sultat dans cette m�me m�moire.
	 * Un esclave AXI-Lite est aussi cr��, accessible par le CPU, pour informer le filtre des adresses
	 * auxquelles il doit aller chercher et �crire l'image, lui dire de d�marrer ou d'arr�ter, etc.
	 */
	// ***** LES 3 LIGNES SUIVANTES DOIVENT �TRE D�COMMENT�ES UNE FOIS LES QUESTIONS INITIALES COMPL�T�ES!! ******
#pragma HLS INTERFACE m_axi port=inter_pix offset=slave
#pragma HLS INTERFACE m_axi port=out_pix offset=slave
#pragma HLS INTERFACE s_axilite port=return

	// Load initial cache
	uint8_t lineBuffer[CACHE_HEIGHT][CACHE_WIDTH];
#pragma HLS ARRAY_PARTITION variable=lineBuffer complete dim=1
	unsigned int lastLine = 0;
	LoadCache : for (;lastLine < 2; lastLine++){
		LoadLine : for (unsigned int i = 0; i < IMG_WIDTH; i++){
			lineBuffer[lastLine][i] = inter_pix[lastLine*IMG_WIDTH+i];
		}
	}

	ImageX : for (unsigned int i = 0; i < IMG_HEIGHT; i++) {
		ImageY : for (unsigned int j = 0; j < IMG_WIDTH; j++) {
#pragma HLS pipeline
#pragma HLS loop_flatten off
			unsigned int val = (i==0 || i==IMG_HEIGHT - 1 || j==0 || j==IMG_WIDTH - 1) ? 0 : ((unsigned int)sobel_operator_cache(i&CACHE_MOD_MASK, j, lineBuffer));
			out_pix[i*IMG_WIDTH+j] = val << 24 | val << 16 | val << 8 | val;
			lineBuffer[lastLine&CACHE_MOD_MASK][j] = inter_pix[(lastLine%IMG_HEIGHT)*IMG_WIDTH+j];
		}
		lastLine++;
	}
}

