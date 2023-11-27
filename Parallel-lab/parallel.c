/* 
 *  Name: Henry Nguyen
 *  UID: 006286478
 */

#include <stdlib.h>
#include <omp.h>

#include "utils.h"
#include "parallel.h"

//TODO: remove below
#include <stdio.h>

/*
 *  PHASE 1: compute the mean pixel value
 *  This code is buggy! Find the bug and speed it up.
 */

void mean_pixel_parallel(const uint8_t img[][NUM_CHANNELS], int num_rows, int num_cols, double mean[NUM_CHANNELS]) {
    int ch,col, row, tmp;
    long count = 0;
    
    double c0 = 0, c1= 0, c2= 0;
    #pragma omp parallel for private(col, tmp) reduction(+:c0,c1,c2) schedule(dynamic)
        for (row = 0; row < num_rows; row++){
            tmp = row*num_cols;
            for (col = 0; col < num_cols; col++) {
                c0 += img[tmp + col][0];
                c1 += img[tmp + col][1];
                c2 += img[tmp + col][2];
            }
        }

    count = num_cols* num_rows;
    mean[0] = c0/count;
    mean[1] = c1/count;
    mean[2] = c2/count;
}



/*
 *  PHASE 2: convert image to grayscale and record the max grayscale value along with the number of times it appears
 *  This code is NOT buggy, just sequential. Speed it up.
 */
void grayscale_parallel(const uint8_t img[][NUM_CHANNELS], int num_rows, int num_cols, uint32_t grayscale_img[][NUM_CHANNELS], uint8_t *max_gray, uint32_t *max_count) {
    int row, col, ch, gray_ch;
    *max_gray = 0;
    *max_count = 0;

    for (col = 0; col < num_cols; col++) {
        for (row = 0; row < num_rows; row++){
            for (gray_ch = 0; gray_ch < NUM_CHANNELS; gray_ch++) {
                grayscale_img[row*num_cols + col][gray_ch] = 0;
                for (ch = 0; ch < NUM_CHANNELS; ch++) {
                    grayscale_img[row*num_cols + col][gray_ch] += img[row*num_cols + col][ch];
                }
                grayscale_img[row*num_cols + col][gray_ch] /= NUM_CHANNELS;
                if (grayscale_img[row*num_cols + col][gray_ch] == *max_gray) {
                    (*max_count)++;
                }
                else if (grayscale_img[row*num_cols + col][gray_ch] > *max_gray) {
                    *max_gray = grayscale_img[row*num_cols + col][gray_ch];
                    *max_count = 1;
                }
            }
        }
    }
}



/*
 *  PHASE 3: perform convolution on image
 *  This code is NOT buggy, just sequential. Speed it up.
 */
void convolution_parallel(const uint8_t padded_img[][NUM_CHANNELS], int num_rows, int num_cols, const uint32_t kernel[], int kernel_size, uint32_t convolved_img[][NUM_CHANNELS]) {
    int row, col, ch, kernel_row, kernel_col;
    int kernel_norm, i;
    int conv_rows, conv_cols;

    // compute kernel normalization factor
    kernel_norm = 0;
    for(i = 0; i < kernel_size*kernel_size; i++) {
        kernel_norm += kernel[i];
    }

    // compute dimensions of convolved image
    conv_rows = num_rows - kernel_size + 1;
    conv_cols = num_cols - kernel_size + 1;

    // perform convolution
    for (ch = 0; ch < NUM_CHANNELS; ch++) {
        for (col = 0; col < conv_cols; col++) {
            for (row = 0; row < conv_rows; row++) {
                convolved_img[row*conv_cols + col][ch] = 0;
                for (kernel_col = 0; kernel_col < kernel_size; kernel_col++) {
                    for (kernel_row = 0; kernel_row < kernel_size; kernel_row++) {
                        convolved_img[row*conv_cols + col][ch] += padded_img[(row+kernel_row)*num_cols + col+kernel_col][ch] * kernel[kernel_row*kernel_size + kernel_col];
                    }
                }
                convolved_img[row*conv_cols + col][ch] /= kernel_norm;
            }    
        }
    }
}