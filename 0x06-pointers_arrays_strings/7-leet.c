#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @p: string
 * Return: encoded string
 */

char *leet(char *p)
{
	int n = 0;

	while (p[n] != '\0')
	{
		while (p[n] == 'a' || p[n] == 'A')
		{
			p[n] = '4';
		}
		while (p[n] == 'e' || p[n] == 'E')
		{
			p[n] = '3';
		}
		while (p[n] == 'o' || p[n] == 'O')
		{
			p[n] = '0';
		}
		while (p[n] == 't' || p[n] == 'T')
		{
			p[n] = '7';
		}
		while (p[n] == 'l' || p[n] == 'L')
		{
			p[n] = '1';
		}
		n++;
	}
	return (p);
}
