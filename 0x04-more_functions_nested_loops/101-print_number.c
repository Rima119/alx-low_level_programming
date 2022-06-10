#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: the printed integer
 * Return: void
 */

void print_number(int n)
{
	int m;
	m = n;

	if (n < 0)
	{
		_putchar('-');
		m = -1 * m;
	}
	else if ((m / 10) > 0)
	{
		print_number(m / 10);
	}
	_putchar((m % 10) + '0');
}
