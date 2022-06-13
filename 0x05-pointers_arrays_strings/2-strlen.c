#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: char type pointer
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int n;

	for (; *s != '\0'; s++)
	{
		n++;
	}

	return (n);
}
