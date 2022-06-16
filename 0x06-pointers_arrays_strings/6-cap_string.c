#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @p: string
 * Return: capitalized words
 */

char *cap_string(char *p)
{
	int n = 0;

	if (p[0] >= 'a' && p[0] <= 'z')
	{
		p[0] -= 32;
	}
	while (p[n] != '\0')
	{
		if (p[n] == ' ' || p[n] == '\n' || p[n] == '\t' || p[n] == ',' ||
		     p[n] == ';' || p[n] == '.' || p[n] == '!' || p[n] == '?'||
		     p[n] == '"' || p[n] == '(' || p[n] == ')' || p[n] == '{'||
		     p[n] == '}')
		{
			if (p[n + 1] >= 'a' && p[n + 1] <= 'z')
			{
				p[n + 1] -= 32;
			}
		}
		n++;
	}
	return (p);
}
