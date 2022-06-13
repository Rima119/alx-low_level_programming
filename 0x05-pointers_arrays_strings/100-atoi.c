#include "main.h"

/**
 * _atoi -  function that convert a string to an integer
 * @s: the string
 * Return: the integer
 */

int _atoi(char *s)
{
	int n = 0;
	int p = 1;
	unsigned int m = 0;

	while (s[n] != '\0' && !(s[n] <= '9' && s[n] >= '0'))
	{
		if (s[n] == '-')
		{
			p = -1 * p;
		}
		n++;
	}
	while (s[n] <= '9' && (s[n] >= '0' && s[n] != '\0'))
	{
		m = (m * 10) + (s[n] - '0');
		n++;
	}
	return (m * p);
}
