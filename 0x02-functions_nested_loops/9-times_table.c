#include <stdio.h>
#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0.
 * Return: 0
 */

void times_table(void)
{
	int n, m, x;

	for (n = 0; n < 10; n++)
	{
		_putchar(48);
		for (m = 1; m < 10; m++)
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
			else
			{
				_putchar(x + '0');
			}

			if (m != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		putchar('\n');
	}
}
