#include "main.h"

/**
 * *_strcpy - function that copies the string pointed to by src
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: char type string
 * @src: char type string
 */

char *_strcpy(char *dest, char *src)
{
	char *n = dest;
	for (; *src != '\0'; src++)
	{
		*dest++ = *src++;
	}
	*dest = 0;
	return (n);
}
