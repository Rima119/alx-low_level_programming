#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: integer
 */

void print_number(int n)
{
	unsigned int p = 1;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		while ((n / p) > 9)
		{
			p = p * 10;
		}
		while (p > 0)
		{
			_putchar((n / p) + '0');
			n = n % p;
			p = p / 10;
		}
	}
	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
	}
}
