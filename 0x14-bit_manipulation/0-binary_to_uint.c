#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: a string of 0 and 1 chars
 * Return: the converted number, or 0 if there is one or more chars in the string b
 * that is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, m = 1;
	int a = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[a] != '\0')
	{
		a++;
	}
	for (a -= 1; a >= 0; a--)
	{
		if (b[a] != '0' && b[a] != '1')
		{
			return (0);
		}
		n += (b[a] - '0') * m;
		m *= 2;
	}
	return (n);
}
