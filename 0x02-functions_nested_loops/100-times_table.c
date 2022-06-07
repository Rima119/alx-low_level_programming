#include <stdio.h>
#include "main.h"

/**
 * print_times_table - function that prints the n times table, starting with 0
 * @n: int type number
 * Return: nothing
 */

void print_times_table(int n)
{
	int m = 0;
	int x;
	int y;

	if (n >= 0 && n <= 15)
	{
		while (m <= n)
		{
			for (x = 0; x <= n; x++)
			{
				y = m * x;
				if (m == 0)
				{
					_putchar(y + '0');
				}
				else if (y >= 100)
				{
					_putchar(y / 100 + '0');
					_putchar((y / 10 % 10) + '0');
					_putchar(y % 10 + '0');
				}
				else if (x != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(y + '0');
				}
				else if (y >= 10 && y < 100)
				{
					_putchar(' ');
					_putchar(y / 10 + '0');
					_putchar(y % 10 + '0');
				}
				else
				{
					_putchar(y + '0');
				}
			}
			if (x != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		m++;
	}
}
