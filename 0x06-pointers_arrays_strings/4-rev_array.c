#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array of integers
 * @n: the number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int p = 0;
	int m;

	while ((n - 1) > p)
	{
		m = a[p];
		a[p] = a[n];
		a[n] = m;
		p++;
	}
}
