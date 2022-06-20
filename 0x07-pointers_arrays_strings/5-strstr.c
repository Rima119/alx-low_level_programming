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
	char *m = needle;

	while (*n)
	{
		n = haystack;
		m = needle;
		while (*n == *m)
		{
			m++;
			n++;
		}
		if (*m == '\0')
		{
			return (n);
		}
		n++;
	}
	return (0);
}
