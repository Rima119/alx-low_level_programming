#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 * @str: string
 * Return: a pointer to a new string which is a duplicate of the string str
 */

char *_strdup(char *str)
{
	char *m;
	int n = 0, p = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[n] != '\0')
	{
		n++;
		p++;
	}
	m = (char *)malloc(sizeof(char) * (p + 1));
	if (m == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < p + 1; n++)
	{
		m[n] = str[n];
	}
	return (m);
}
