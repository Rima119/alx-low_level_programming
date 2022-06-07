#include <stdio.h>
#include "main.h"

/**
 * print_times_table - function that prints the n times table, starting with 0
 * @n: int type number
 * Return: nothing
 */

void print_times_table(int n)
{
	int m;
	int x;
	int y;

	if (n >= 0 && n <= 15)
	{
		for (m = 0; m <= n; m++)
		{
			_putchar('0');
			for (x = 1; x <= n; x++)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				y = m * x;
				if (y >= 100)
				{
					_putchar((y / 100) + '0');
					_putchar((y / 10 % 10) + '0');
				}
				else if (y <= 99)
				{
					_putchar(' ');
				}
				else if (y >= 10 && y < 100)
				{
					_putchar((y / 10) + '0');
					_putchar((y % 10) + '0');
				}
				else if (y <= 9)
				{
					_putchar(y + '0');
				}
				_putchar((y % 10) + '0'); 
			}
			_putchar((y % 10) + '0');
		}
	}
}
