#include <stdio.h>
#include "main.h"

/**
 * jack_bauer -  a function that prints every minute
 * of the day of Jack Bauer, starting from 00:00 to 23:59.
 * Return: no
 */

void jack_bauer(void)
{
	int n;
	int m;

	for (n = 0; n < 24; n++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
