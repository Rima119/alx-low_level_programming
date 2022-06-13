#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 * @s: the printed string
 */

void print_rev(char *s)
{
	int n;
	int m;
	m = n - 1;

	for (n = 0; s[n] != '\0'; n++)
	{
	}
	while (m >= 0)
	{
		_putchar(s[n]);
		m--;
	}
	_putchar('\n');
}
