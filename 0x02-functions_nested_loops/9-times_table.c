#include <stdio.h>
#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0.
 * Return: 0
 */

void times_table(void)
{
	int n, m, x;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (m = 1; m <= 9; m++)
		{
			x = n * m;
			if (x > 9)
			{
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
			}
			else if (m != 0)
			{
				_putchar(' ');
				_putchar(x + '0');
			}
			else if (m != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(x + '0');
			}
		}
		putchar('\n');
	}
}
