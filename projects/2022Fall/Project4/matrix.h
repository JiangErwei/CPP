//
// Created by suyi on 24-5-11.
//

#ifndef MATRIX_H
#define MATRIX_H

#pragma once

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <malloc.h>

typedef struct Matrix {
	size_t rows;
	size_t cols;
	float *pData;
} Matrix;

Matrix create_matrix(size_t, size_t,float *);

void destroy_matrix(Matrix *);

void print_matrix(const Matrix *);

bool matmul_plain(const Matrix *, const Matrix *, Matrix *);

#endif //MATRIX_H
