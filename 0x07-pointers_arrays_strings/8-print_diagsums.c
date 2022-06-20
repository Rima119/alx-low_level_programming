#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: the matrix
 * @size: the size of matrix
 */

void print_diagsums(int *a, int size)
{
	int n, m = 0, p = 0;

	for (n = 0; n < (size * size); n += size + 1)
	{
		m += a[n];
	}
	for (n = 0; n < (size * size) - size; n += size - 1)
	{
		p += a[n];
	}
	printf("%d, %d\n", m, p);
}
