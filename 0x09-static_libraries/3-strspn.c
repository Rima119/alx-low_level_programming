#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: the initial segment
 * @accept: the substring
 * Return: number of bytes in initial segment s consisting of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int n, m;

	for (n = 0; s[n] != '\0'; n++)
	{
		for (m = 0; accept[m] != '\0'; m++)
		{
			if (s[n] == accept[m])
			{
				break;
			}
		}
		if (!accept[m])
		{
			break;
		}
	}
	return (n);
}
