#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: string
 * @needle: substring
 * Return: a pointer to the beginning of the located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *n = haystack;

	while (*n)
	{
		n = haystack;
		while (*haystack == *needle)
		{
			needle++;
			haystack++;
		}
		if (*needle == '\0')
		{
			return (n);
		}
		haystack++;
	}
	return (0);
}
