#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Description: Write a program that prints _putchar, followed by a new line.
 * Return: 0
 */

int main(void)
{
	char *p = "_putchar";

	while (*p)
	{
		_putchar(*p);
		p++;
	}
	_putchar('\n');

	return (0);
}
