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
		for (m = 0; m < 10; m++)
		{
			x = n * m;
			if (m > 0)
			{
				if (x >= 10)
				{
					_putchar(' ');
					_putchar((x / 10) + '0');
					_putchar((x % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((x % 10) + '0');
				}
				if (m != 9)
				{
					_putchar(',');
				}
			}
			else
			{
				_putchar ('0' + (x % 10));
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
