#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of the program
 * @ac: count argument
 * @av: vector argument
 * Return: a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *m;
	int n, p;
       	int x = 0, s = 0;

	if (ac == 0 || av == 0)
	{
		return (NULL);
	}
	for (n = 0; n < ac; n++)
	{
		for (p = 0; av[n][p] != '\0'; p++)
		{
			x++;
		}
	}
	m = (char *)malloc((ac + x + 1) * sizeof(char));
	if (m == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < ac; n++)
	{
		for (p = 0; av[n][p] != '\0'; p++)
		{
			m[s] = av[n][p];
			s++;
		}
		m[s] = '\n';
		s++;
	}
	return (m);
}
