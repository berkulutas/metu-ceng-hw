/********************************************************
 * Kernels to be optimized for the CS:APP Performance Lab
 ********************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "defs.h"
/*
 * Please fill in the following team_t struct
 */
team_t team = {
        "SAGOLAYANLAR",    /* Team Name */

        "e252208",    /* First student ID */
        "Berk Ulutas",    /* First student name */
        
        "e244343",        /* Second student ID */
        "Beyza Nur Koc"         /* Second student name */

};


/*******************************************************
 * BATCHED MATRIX MULTIPLICATION \W SUM REDUCTION KERNEL
 *******************************************************/

/*********************************************************************************
 * Your different versions of the batched matrix multiplication functions go here
 *********************************************************************************/

/*
 * naive_batched_mm - The naive baseline version of batched matrix multiplication
 */
char naive_batched_mm_descr[] = "naive_batched_mm: Naive baseline implementation";
void naive_batched_mm(int dim, int *b_mat, int *mat, int *dst) {
    int i,j,k,l;
    
    for (i = 0; i < dim; i++) {
        for (j = 0; j < dim; j++) {
            for (k = 0; k < dim; k++) {
            	if (i == 0){
            	    dst[RIDX(j, k, dim)] = 0;
            	}
            	for (l = 0; l < dim; l++){
                    dst[RIDX(j, k, dim)] += b_mat[RIDX(i*dim+j, l, dim)] * mat[RIDX(l, k, dim)];
                }
            }
        }
    }
}

/*
 * batched_mm - Your current working version of batched matrix multiplication
 * IMPORTANT: This is the version you will be graded on
 */
char batched_mm_descr[] = "Batched MM with sum reduction: Current working version";
void batched_mm(int dim, int *b_mat, int *mat, int *dst)
{

    int b_index,i,j,k;

    int r, r1, r2, r3; 
    int r4, r5, r6, r7; 

    int acc;

    int *summed_b_mat = (int *) malloc(dim*dim*sizeof(int));

    int *tmp_summed_b_mat = summed_b_mat;

    int dim2 = dim*dim;
    int _2dim2 = 2*dim2;
    int _3dim2 = 3*dim2;
    int bindex_dim2;
    int idim;
    int sik;

    int *tmp_mat_p; 
    int *mat_p, *mat_p1, *mat_p2, *mat_p3, *mat_p4, *mat_p5, *mat_p6, *mat_p7;

    int *summed_b_mat_ptr;

    for (i = 0; i < dim; i++) {
        idim = i*dim;
        for (j = 0; j < dim; j++) {
            acc = 0;
            acc += b_mat[idim + j];
            acc += b_mat[dim2 + idim + j];
            acc += b_mat[_2dim2 + idim + j];
            acc += b_mat[_3dim2 + idim + j];
            tmp_summed_b_mat[idim + j ] = acc;
        } 
    }
    
    for (b_index = 4; b_index < dim; b_index+=4) {
        bindex_dim2 = b_index*dim2;
        for (i = 0; i < dim; i++) {
            idim = i*dim;
            sik = bindex_dim2 + idim;
            for (j = 0; j < dim; j++) {
                acc = 0; 
                acc += b_mat[sik + j];
                acc += b_mat[sik + dim2 + j];
                acc += b_mat[sik + _2dim2 +j];
                acc += b_mat[sik + _3dim2 +j];
    
                tmp_summed_b_mat[RIDX(i, j, dim)] += acc;
            }
        }
    }

    for (k = 0; k < dim; k+=8) {
        tmp_mat_p = mat + k*dim;
        for (i=0; i < dim; i++) {
            mat_p = tmp_mat_p;
            mat_p1 = mat_p + dim;
            mat_p2 = mat_p1 + dim;
            mat_p3 = mat_p2 + dim;
            mat_p4 = mat_p3 + dim;
            mat_p5 = mat_p4 + dim;
            mat_p6 = mat_p5 + dim;
            mat_p7 = mat_p6 + dim;
            idim = i*dim; 
            summed_b_mat_ptr = summed_b_mat +  idim + k;

            r = *summed_b_mat_ptr; summed_b_mat_ptr++; 
            r1 = *summed_b_mat_ptr; summed_b_mat_ptr++; 
            r2 = *summed_b_mat_ptr; summed_b_mat_ptr++; 
            r3 = *summed_b_mat_ptr; summed_b_mat_ptr++; 
            r4 = *summed_b_mat_ptr; summed_b_mat_ptr++; 
            r5 = *summed_b_mat_ptr; summed_b_mat_ptr++; 
            r6 = *summed_b_mat_ptr; summed_b_mat_ptr++; 
            r7 = *summed_b_mat_ptr; summed_b_mat_ptr++; 
          
            
            
            for (j=0; j < dim; j++) {
                acc = 0; 
                acc += r * (*mat_p); mat_p++;     
                acc += r1 * (*mat_p1); mat_p1++; 
                acc += r2 * (*mat_p2); mat_p2++; 
                acc += r3 * (*mat_p3); mat_p3++; 
                acc += r4 * (*mat_p4); mat_p4++; 
                acc += r5 * (*mat_p5); mat_p5++; 
                acc += r6 * (*mat_p6); mat_p6++; 
                acc += r7 * (*mat_p7); mat_p7++; 
           

                dst[idim+j] += acc;
            }
        }
    }


    free(summed_b_mat);

}

/*********************************************************************
 * register_batched_mm_functions - Register all of your different versions
 *     of the batched matrix multiplication functions  with the driver by calling the
 *     add_batched_mm_function() for each test function. When you run the
 *     driver program, it will test and report the performance of each
 *     registered test function.
 *********************************************************************/

void register_batched_mm_functions() {
    // add_batched_mm_function(&naive_batched_mm, naive_batched_mm_descr);
    add_batched_mm_function(&batched_mm, batched_mm_descr);
    /* ... Register additional test functions here */
}




/************************
 * POINT REFLECTION KERNEL
 ************************/

/*********************************************************
 * Your different versions of the point reflection go here
 *********************************************************/

/*
 * naive_reflect - The naive baseline version of point reflection
 */
char naive_reflect_descr[] = "Naive Point Reflection: Naive baseline implementation";
void naive_reflect(int dim, int *src, int *dst) {
    int i, j;

    for (i = 0; i < dim; i++) {
	for (j = 0; j < dim; j++) {
	    dst[RIDX(dim-1-i, dim-1-j, dim)] = src[RIDX(i, j, dim)];
	}
    }
}


/*
 * reflect - Your current working version of reflect
 * IMPORTANT: This is the version you will be graded on
 */
char reflect_descr[] = "Point Reflection: Current working version";
void reflect(int dim, int *src, int *dst)
{
    int size = dim*dim-1;
    int *dstStart = dst; 
    dst += size; 

    while (dst > dstStart) {
        *dst = *src;
        dst[-1] = src[1];
        dst[-2] = src[2];
        dst[-3] = src[3];
        dst[-4] = src[4];
        dst[-5] = src[5];
        dst[-6] = src[6];
        dst[-7] = src[7];
        dst[-8] = src[8];
        dst[-9] = src[9];
        dst[-10] = src[10];
        dst[-11] = src[11];
        dst[-12] = src[12];
        dst[-13] = src[13];
        dst[-14] = src[14];
        dst[-15] = src[15];

        dst[-16] = src[16];
        dst[-17] = src[17];
        dst[-18] = src[18];
        dst[-19] = src[19];
        dst[-20] = src[20];
        dst[-21] = src[21];
        dst[-22] = src[22];
        dst[-23] = src[23];
        dst[-24] = src[24];
        dst[-25] = src[25];
        dst[-26] = src[26];
        dst[-27] = src[27];
        dst[-28] = src[28];
        dst[-29] = src[29];
        dst[-30] = src[30];
        dst[-31] = src[31];

        dst -= 32; 
        src += 32; 
    }

}

/******************************************************************************
 * register_reflect_functions - Register all of your different versions
 *     of the reflect with the driver by calling the
 *     add_reflect_function() for each test function. When you run the
 *     driver program, it will test and report the performance of each
 *     registered test function.  
 ******************************************************************************/

void register_reflect_functions() {
    // add_reflect_function(&naive_reflect, naive_reflect_descr);
    add_reflect_function(&reflect, reflect_descr);
    /* ... Register additional test functions here */
}

