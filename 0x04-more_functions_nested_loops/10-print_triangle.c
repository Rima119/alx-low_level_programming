#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
	int n, m;

	if (size < 1)
	{
		_putchar('\n');
	}

	for (n = 1; n <= size; n++)
	{
		for (m = n; m < size; m++)
		{
			_putchar(' ');
		}
		for (m = 1; m <= n; m++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
