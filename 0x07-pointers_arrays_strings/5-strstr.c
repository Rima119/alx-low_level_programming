#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: string
 * @needle: substring
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		while (*haystack = *needle)
		{
			*needle++;
			*haystack++;
		}
		if (*needle == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
