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
		for (m = size; m >= 1; m--)
		{
			if (m > l)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
