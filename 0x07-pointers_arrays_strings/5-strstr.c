#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: string
 * @needle: substring
 * Return: a pointer to the beginning of the located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *n;
	char *m:

	while (*haystack)
	{
		n = haystack;
		m = needle;
		while (*m)
		{
			if (*n == *m)
			{
				m++;
				n++;
			}
			else
			{
				break;
			}
			if (*m == '\0')
			{
				return (n);
			}
			haystack++;
	}
	return (0);
}
