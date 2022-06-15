#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @p: string
 * Return: encoded string
 */

char *leet(char *p)
{
	int n;
	int m = 0;
	int l[] = "aAeEoOtTlL";
	int num[] = "4433007711";

	for (n = 0; p[n] != '\0'; n++)
	{
		while (m < 10)
		{
			if (p[n] == l[m])
			{
				p[n] = num[m];
			}
			m++;
		}
	}
	return (p);
}
