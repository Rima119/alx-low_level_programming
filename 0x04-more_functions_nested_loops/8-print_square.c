#include "main.h"

/**
 * print_square - function that prints a square
 * @size: the size of the square
 */

void print_square(int size)
{
	int m, p;

	if (size < 1)
	{
		_putchar('\n');
	}

	for (m = 0; m < size; m++)
	{
		for (p = 0; p < size; p++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
