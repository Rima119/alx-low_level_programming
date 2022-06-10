#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: the printed integer
 * Return: void
 */

void print_number(int n)
{
	int m, p;
	m = n;

	if (n < 0)
	{
		m = -1 * m;
		_putchar('-');
	}
	
	if ((m / 10) != 0)
	{
		print_number(m / 10);
	}
	_putchar((n % 10) + '0');
}
