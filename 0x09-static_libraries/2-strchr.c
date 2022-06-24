#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string
 * @c: character
 * Return: a pointer to the first occurrence char c in string s or NULL
 */

char *_strchr(char *s, char c)
{
	unsigned int m = 0;

	for (m = 0; s[m] != '\0'; m++)
	{
		if (s[m] == c)
		{
			return (s + m);
		}
	}
	if (s[m] == c)
	{
		return (s + m);
	}
	return (0);
}
