#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * @n: number of bytes
 * Return: a pointer to the allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *m;
	unsigned int s = n;
	unsigned int x;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (x = 0; s1[x]; x++)
	{
		s++;
	}
	m = malloc(sizeof(char) * (s + 1));
	if (m == NULL)
	{
		return (NULL);
	}
	s = 0;
	for (x = 0; s1[x]; x++)
	{
		m[s++] = s1[x];
	}
	for (x = 0; s2[x] && x < n; x++)
	{
		m[s++] = s2[x];
	}
	m[s] = '\0';
	return (m);
}
