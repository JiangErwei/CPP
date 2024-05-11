//
// Created by suyi on 24-5-11.
//

#include <stddef.h>

#include "matrix.h"

int main() {
	const size_t rows1 = 2, cols1 = 3;
	float data1[] = {1.f, 2.f, 3.f, 4.f, 5.f, 6.f};
	Matrix mat1 = create_matrix(rows1, cols1, data1);
	print_matrix(&mat1);
	printf("\n");


	const size_t rows2 = 3, cols2 = 3;
	float data2[] = {1.f, 1.f, 1.f, 1.f, 1.f, 1.f, 1.f, 1.f, 1.f};
	Matrix mat2 = create_matrix(rows2, cols2, data2);
	print_matrix(&mat2);
	printf("\n");

	Matrix mat3 = create_matrix(0, 0,NULL);
	matmul_plain(&mat1, &mat2, &mat3);
	print_matrix(&mat3);

	// destroy_matrix(&mat1);
	// destroy_matrix(&mat2);
	destroy_matrix(&mat3);
	return 0;
}
