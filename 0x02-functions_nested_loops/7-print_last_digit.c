#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @n: type int integer
 * Return: the value of last digit
 */

int print_last_digit(int n)
{
	int x;

	if (n >= 0)
	{
		x = n % 10;
		_putchar(x + '0');
		return (x);
	}
	else 
	{
		x = (n % 10) * -1;
		_putchar(x + '0');
		return (x);
	}
}
