#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: string
 * @src: string
 * @n: number of bytes from src
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int p = 0;
	int m = 0;

	while (dest[p] != '\0')
	{
		p++;
	}
	while (n > m && src[m] != '\0')
	{
		dest[p] = src[m];
		p++;
		m++;
	}
	dest[p] = '\0';

	return (dest);
}
