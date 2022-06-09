#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
	int n, m, p;

	if (size < 1)
	{
		_putchar('\n');
	}
	for (n = 0; n < size; n++)
	{
		for (p = n + m; p >= 1; p--)
		{
			_putchar('#');
		}
		for (m = size - n; m > 1; m--)
		{
			_putchar(' ');
		}
		_putchar('\n');
	}
}
