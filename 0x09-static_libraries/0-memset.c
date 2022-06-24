#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory
 * area pointed to by s with the constant byte b
 * @s: the memory area
 * @b: the constant byte
 * @n: the number of bytes
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		s[m] = b;
	}
	return (s);
}
