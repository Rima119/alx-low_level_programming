#include "main.h"

/**
 * string_toupper - function that changes all lowercase of string to uppercase
 * @p: string
 * Return: uppercase letters of a string
 */

char *string_toupper(char *p)
{
	int n = 0;

	while (p[n] != '\0')
	{
		if (p[n] >= 'a' && p[n] <= 'z')
		{
			p[n] -= 32;
		}
		n++;
	}
	return (p);
}
