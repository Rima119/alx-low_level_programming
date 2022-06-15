#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @p: string
 * Return: encoded string
 */

char *rot13(char *p)
{
	int n;
	int m;
	char l[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char u[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (n = 0; p[n] != '\0'; n++)
	{
		for (m = 0; l[m] != '\0'; m++)
		{
			if (p[n] == l[m])
			{
				p[n] = u[m];
				break;
			}
		}
	}
	return (p);
}
