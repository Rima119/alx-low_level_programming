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

	while (*s != '\0' && !(*s <= '9' && *s >= '0'))
	{
		if (*s == '-')
		{
			p = -1 * p;
		}
		n++;
	}
	while (*s <= '9' && (*s >= '0' && *s != '\0'))
	{
		m = (m * 10) + (*s - '0');
		n++;
	}
	
	return (m * p);
}
