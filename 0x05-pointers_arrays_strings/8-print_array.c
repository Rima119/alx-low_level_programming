#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers
 * @a: int array pointer
 * @n: integer
 */

void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		printf("%d", a[m]);
		if (n > 0)
		{
			printf(", ");
			printf(" ");
		}
	}
	printf("\n");
}
