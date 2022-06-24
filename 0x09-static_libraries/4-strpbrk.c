#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string
 * @accept: string
 * Return: a pointer to byte in s that matches one of bytes in accept or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int n, m;

	for (n = 0; s[n] != '\0'; n++)
	{
		for (m = 0; accept[m] != '\0'; m++)
		{
			if (s[n] == accept[m])
			{
				return (s + n);
			}
		}
	}
	return (0);
}
