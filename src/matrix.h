

#pragma once

#ifndef MATRIX_H

typedef struct Matrix {
    int row;
    int col;
    double **data;
} Matrix ;

void add_matrix(Matrix * mat1 , Matrix * mat2);
void sub_matrix(Matrix * mat1 , Matrix * mat2);
void dot_product(Matrix * mat1 , Matrix * mat2);
void cross_product(Matrix * mat1 , Matrix * mat2);


#endif
