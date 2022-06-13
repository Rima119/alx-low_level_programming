#include "main.h"

/**
 * _atoi -  function that convert a string to an integer
 * @s: the string
 * Return: the integer
 */

int _atoi(char *s)
{
	int p = 1;
	unsigned int m = 0;

	while (*s != '\0' && !(*s <= '9' && *s >= '0'))
	{
		if (*s == '-')
		{
			p = -1 * p;
		}
		*s++;
	}
	while (*s <= '9' && (*s >= '0' && *s != '\0'))
	{
		m = (m * 10) + (*s - '0');
		*s++;
	}
	
	return (m * p);
}
