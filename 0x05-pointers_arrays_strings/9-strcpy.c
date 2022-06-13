#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: char type string
 * @src: char type string
 */

char *_strcpy(char *dest, char *src)
{
	for (; *scr != '\0'; scr++)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (dest);
}
