#include <stdio.h>
#include "main.h"

/**
 * _islower - function that checks for lowercase character.
 * @c: The character in ASCII code
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
