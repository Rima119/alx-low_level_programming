#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: string
 * @src: string
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int p = 0;
	int m = 0;

	while (dest[p] != '\0')
	{
		p++;
	}
	while (src[m] != '\0')
	{
		dest[p] = src[m];
		p++;
		m++;
	}
	dest[p] = '\0';

	return (dest);
}
