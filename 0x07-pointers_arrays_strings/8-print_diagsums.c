#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers
 * @a: a pointer to the square matrix
 * @size: the size of the square matrix
 *
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int doub_size = size * size;
	int sum_diag1 = 0, sum_diag2 = 0;

	for (i = 0; i < doub_size; i += size + 1)
		sum_diag1 += a[i];

	for (j = doub_size - size; j >= 0; j -= size - 1)
		sum_diag2 += a[j];

	printf("%d, %d\n", sum_diag1, sum_diag2);
}
