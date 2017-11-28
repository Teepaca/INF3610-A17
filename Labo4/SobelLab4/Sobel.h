#pragma once

#include <inttypes.h>


#define IMG_WIDTH 1920
#define IMG_HEIGHT 1080
#define IMG_SIZE (IMG_WIDTH * IMG_HEIGHT)
#define CACHE_HEIGHT 4
#define CACHE_WIDTH 1920
#define CACHE_MOD_MASK 0x03

uint8_t sobel_operator(const int col, const int row, uint8_t image[IMG_HEIGHT][IMG_WIDTH]);
uint8_t sobel_operator_cache(const int col, const int row, uint8_t cache[CACHE_HEIGHT][CACHE_WIDTH]);
void sobel_filter(uint8_t* inter_pix, unsigned int* out_pix);
