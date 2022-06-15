#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: string
 * @src: string
 * @n: number of bytes from src
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int p = 0;

	while (n > p && src[p] != '\0')
	{
		dest[p] = src[p];
		p++;
	}
	while (n > p)
	{
		dest[p] = '\0';
		p++;
	}

	return (dest);
}
