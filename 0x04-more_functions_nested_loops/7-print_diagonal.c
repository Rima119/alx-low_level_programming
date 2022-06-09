#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line.
 * @n: the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int m, p;

	if (n < 1)
	{
		_putchar('\n');
	}

	for (m = 0; m <= n; m++)
	{
		for (p = 1; p <= m; p++)
		{
			if  (m != p)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('\\');
				_putchar('\n');
			}
		}
	}
}
