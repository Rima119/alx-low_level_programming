#include <stdio.h>
#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: the printed integer
 * Return: void
 */

void print_number(int n)
{
	unsigned int m;
	m = n;

	if (n < 0)
	{
		m = -1 * m;
		m = n;
		_putchar('-');
	}
	
	if ((m / 10) != 0)
	{
		print_number(m / 10);
	}
	_putchar((unsigned int) n % 10 + '0');
}
