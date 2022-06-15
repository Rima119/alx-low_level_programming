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
	char l[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (n = 0; p[n] != '\0'; n++)
	{
		for (m = 0; m < 10; m++)
		{
			if (p[n] == l[m])
			{
				p[n] = num[m];
			}
		}
	}
	return (p);
}
