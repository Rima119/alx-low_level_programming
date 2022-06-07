#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet in lowercase
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int n = 0;

	while (n < 10)
	{
		char p;

		for (p = 'a'; p <= 'z'; p++)
		{
			_putchar(p);
		}
		_putchar('\n');
		n++;
	}
}
