#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: the printed string
 */

void puts_half(char *str)
{
	int n, m;

	for (n = 0; str[n] != '\0'; n++)
	{
	}

	m = n / 2;
	m++;
	for (; str[m] != '\0'; m++)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}
