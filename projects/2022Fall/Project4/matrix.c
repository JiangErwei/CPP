#include "matrix.h"

Matrix create_matrix(const size_t rows, const size_t cols, float *pData) {
	Matrix matrix;
	if (rows == 0 || cols == 0) {
		matrix.rows = 0;
		matrix.cols = 0;
		matrix.pData = NULL;
	} else {
		matrix.rows = rows;
		matrix.cols = cols;
		// matrix.pData = (float *) malloc(rows * cols * sizeof(float));
		// memcpy(matrix.pData, pData, rows * cols * sizeof(float));
		matrix.pData = pData;
	}
	return matrix;
}

void destroy_matrix(Matrix *matrix) {
	if (matrix->pData != NULL) {
		free(matrix->pData);
		matrix->pData = NULL;
	}
	matrix->rows = 0;
	matrix->cols = 0;
}

void print_matrix(const Matrix *matrix) {
	for (size_t i = 0; i < matrix->rows; ++i) {
		for (size_t j = 0; j < matrix->cols; ++j)
			printf("%.2f ", matrix->pData[i * matrix->cols + j]);
		printf("\n");
	}
}

bool matmul_plain(const Matrix *matrix1, const Matrix *matrix2, Matrix *matrix3) {
	// 检查相乘矩阵是否符合规范
	if (matrix1 && matrix2) {
		if (matrix1->cols != matrix2->rows) {
			printf("The matrix shape does not match\n");
			return false;
		}
	} else {
		printf("There is an empty matrix\n");
		return false;
	}

	// 申请空间
	matrix3->rows = matrix1->rows;
	matrix3->cols = matrix2->cols;
	const size_t m = matrix3->rows;
	const size_t n = matrix3->cols;
	matrix3->pData = (float *) malloc(m * n * sizeof(float));
	for (size_t i = 0; i < m * n; ++i)
		matrix3->pData[i] = 0.f;

	for (size_t i = 0; i < m; ++i)
		for (size_t j = 0; j < n; ++j)
			for (size_t k = 0; k < matrix1->cols; ++k)
				matrix3->pData[i * n + j] += (matrix1->pData[i * n + k] * matrix2->pData[k * n + j]);

	return true;
}
