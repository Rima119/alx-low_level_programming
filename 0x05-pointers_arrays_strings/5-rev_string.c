#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: the reversed string
 */

void rev_string(char *s)
{
	int n, m;
	char x;

	for (n = 0; str[n] != '\0'; n++)
	{
	}
	for (m = 0; m < (n / 2); m++)
	{
		x = s[m];
		s[m] = s[n - m - 1];
		s[n - m - 1] = x;
	}
}
