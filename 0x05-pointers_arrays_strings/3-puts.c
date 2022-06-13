#include "main.h"

/**
 * _puts - unction that prints a string to stdout
 * @str: the printed string
 */

void _puts(char *str)
{
	int n;

	for (n = 0; *str != '\0'; n++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
