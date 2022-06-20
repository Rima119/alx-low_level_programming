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
	char *m;

	while (*n)
	{
		n = haystack;
		m = needle;
		while (*m == *n)
		{
			n++;
			m++;
		}
		if (*m == '\0')
		{
			return (n);
		}
		n++;
	}
	return (0);
}
