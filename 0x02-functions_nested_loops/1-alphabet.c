#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Description: Write a function that prints the alphabet, in lowercase, followed by a new line.
 * Return: 0
 */

void print_alphabet(void)
{
	char p;

	for (p = 'a'; p <= 'z'; p++)
	{
		_putchar(p);
	}
	_putchar('\n');
}
