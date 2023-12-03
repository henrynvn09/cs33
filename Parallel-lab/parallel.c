/* 
 *  Name: Henry Nguyen
 *  UID: 006286478
 */

#include <stdlib.h>
#include <omp.h>

#include "utils.h"
#include "parallel.h"

#include <stdio.h> //TODO: remove

/*
 *  PHASE 1: compute the mean pixel value
 *  This code is buggy! Find the bug and speed it up.
 */

void mean_pixel_parallel(const uint8_t img[][NUM_CHANNELS], int num_rows, int num_cols, double mean[NUM_CHANNELS]) {
    int col, row, tmp;
    
    double c0 = 0, c1= 0, c2= 0;
    #pragma omp parallel for private(col, tmp) reduction(+:c0,c1,c2) schedule(dynamic)
        for (row = 0; row < num_rows; ++row){
            tmp = row*num_cols;
            for (col = 0; col < num_cols; col+=2) {
                c0 += img[tmp + col][0];
                c1 += img[tmp + col][1];
                c2 += img[tmp + col][2];

                c0 += img[tmp + col + 1][0];
                c1 += img[tmp + col + 1][1];
                c2 += img[tmp + col + 1][2];
            }
        }

    double count = num_cols* num_rows;
    mean[0] = c0/count;
    mean[1] = c1/count;
    mean[2] = c2/count;
}



/*
 *  PHASE 2: convert image to grayscale and record the max grayscale value along with the number of times it appears
 *  This code is NOT buggy, just sequential. Speed it up.
 */

void grayscale_parallel(const uint8_t img[][NUM_CHANNELS], int num_rows, int num_cols, uint32_t grayscale_img[][NUM_CHANNELS], uint8_t *max_gray, uint32_t *max_count) {
    int row, col, tmp, tmp1;
    uint32_t c;
    uint8_t m_gray[33];
    uint32_t m_count[33];

    int max_threads = omp_get_max_threads();
    for (int i = 0; i < max_threads+1; i++)
    {
        m_gray[i] = 0;
        m_count[i] = 0;
    }

    #pragma omp parallel for private(col, tmp, tmp1, c)
    for (row = 0; row < num_rows; row++){
        tmp = row*num_cols;
        int thread_id = omp_get_thread_num();
        for (col = 0; col < num_cols; col++) {
            tmp1 = tmp + col;
            c  = img[tmp1][0] + img[tmp1][1] + img[tmp1][2];
            c /= 3;
            
            if (m_gray[thread_id] == c) {
                m_count[thread_id]++;
            }
            else if (c > m_gray[thread_id]) {
                m_gray[thread_id] = c;
                m_count[thread_id] = 1;
            }

            grayscale_img[tmp1][0] = c;
            grayscale_img[tmp1][1] = c;
            grayscale_img[tmp1][2] = c;
        }
    }

    *max_gray = 0;
    *max_count = 0;
    for (int i = 0; i < max_threads; i++) {
        if (*max_gray == m_gray[i]){
            *max_count += m_count[i];
        }
        else if (*max_gray < m_gray[i]){
            *max_gray = m_gray[i];
            *max_count = m_count[i];
        }
    }
    *max_count *= 3;
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
