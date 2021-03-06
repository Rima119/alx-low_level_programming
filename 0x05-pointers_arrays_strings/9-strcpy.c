#include "main.h"

/**
 * *_strcpy - function that copies the string pointed to by src
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: char type string
 * @src: char type string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *n = dest;

	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = 0;
	return (n);
}
