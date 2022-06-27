#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: a pointer to a newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	char *m;
	int n = 0, p = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[n] != '\0')
	{
		n++;
	}
	while (s2[p] != '\0')
	{
		p++;
	}
	m = malloc(sizeof(char) * (n + p + 1));
	if (m == NULL)
	{
		return (NULL);
	}
	while (s1[n] != '\0')
	{
		m[n] = s1[n];
		n++;
	}
	while (s2[p] != '\0')
	{
		m[n] = s2[p];
		n++;
		p++;
	}
	m[n] = '\0';
	return (m);
}
