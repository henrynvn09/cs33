/* 
 *  Name: Henry Nguyen
 *  UID: 006286478
 */

#include <stdlib.h>
#include <omp.h>

#include "utils.h"
#include "parallel.h"

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
    #pragma omp parallel for
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
    int kernel_norm, i;
    int conv_rows, conv_cols;
    uint32_t tmp0 = 0, tmp1 = 0, tmp2 = 0;

    // compute kernel normalization factor
    kernel_norm = 0;
    #pragma omp parallel for reduction(+:kernel_norm)
    for(i = 0; i < kernel_size*kernel_size; i++) {
        kernel_norm += kernel[i];
    }

    // compute dimensions of convolved image
    conv_rows = num_rows - kernel_size + 1;
    conv_cols = num_cols - kernel_size + 1;

    // perform convolution
    const int BLOCK = 1;
    int kernel_rowSize, tmp, row_conv_cols, temp1;
    int a,b,row,col;
    int kernel_row, kernel_col;

    #pragma omp parallel for private(b,row,col,tmp0,tmp1,tmp2,kernel_rowSize,tmp,kernel_row,kernel_col,temp1,row_conv_cols) collapse(2)
    for (a = 0; a < conv_rows; a+= BLOCK) {
        for (b = 0; b < conv_cols; b+= BLOCK) {
            for (row = a; row < a+BLOCK; row++) {
                for (col = b; col < b+BLOCK; col++) {
                    tmp0 = tmp1 = tmp2 = 0;
                    kernel_rowSize = 0;
                    tmp = col + row*num_cols;
                    for (kernel_row = 0; kernel_row < kernel_size; kernel_row++) {
                        for (kernel_col = 0; kernel_col < kernel_size; kernel_col++) {
                            temp1 =kernel[kernel_rowSize + kernel_col];
                            tmp0 += padded_img[tmp + kernel_col][0] * temp1;
                            tmp1 += padded_img[tmp + kernel_col][1] * temp1;
                            tmp2 += padded_img[tmp + kernel_col][2] * temp1;
                        }
                        kernel_rowSize += kernel_size;
                        tmp += num_cols;
                    }
                    row_conv_cols = row*conv_cols + col;
                    convolved_img[row_conv_cols][0] = tmp0 / kernel_norm;
                    convolved_img[row_conv_cols][1] = tmp1 / kernel_norm;
                    convolved_img[row_conv_cols][2] = tmp2 / kernel_norm;
                }    
            }
        }
    }
}
