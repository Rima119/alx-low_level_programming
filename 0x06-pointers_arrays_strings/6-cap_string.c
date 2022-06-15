#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @p: string
 * Return: capitalized words
 */

char *cap_string(char *p)
{
	int n = 0;

	while (p[n] != '\0')
	{
		if ( p[n - 1] == ' ' || p[n - 1] == '\n' || p[n - 1] == '\t' || p[n - 1] == ',' || p[n - 1] == ';' || p[n - 1] == '.' || p[n - 1] == '!' || p[n - 1] == '?' || p[n - 1] == '"' || p[n - 1] == '(' || p[n - 1] == ')' || p[n - 1] == '{' || p[n - 1] == '}' || (p[n] >= 'a' && p[n] <= 'z') && (p[0] >= 'a' && p[0] <= 'z'))
		{
			p[n] -= 32;
		}
		p++
	}
	return (p);
}
