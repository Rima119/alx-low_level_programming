#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string
 * @c: character
 * Return: a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int m;

	for (m = 0; s[m] != '\0'; m++)
	{
		if (s[m] == c)
		{
			return (s + m);
		}
	}
	return (0);
}
