#include "main.h"

/**
 * string_toupper - function that changes all lowercase
 * letters of a string to uppercase
 * @p: string
 * Return: uppercase letters of a string
 */

char *string_toupper(char *p)
{
	while (*p != '\0')
	{
		if (*p >= 'a' && *p <= 'z')
		{
			*p = *p - 32;
		}
		p++;
	}
	return (p);
}
