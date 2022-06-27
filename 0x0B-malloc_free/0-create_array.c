#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars and
 * initializes it with a specific char.
 * @size: size of the array
 * @c: the character
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *m;
	unsigned int n = 0;

	if (size == 0)
	{
		return (NULL);
	}
	m = malloc(sizeof(char) * size)
	
	if (m == NULL)
	{
		return (NULL);
	}

	while (size > n)
	{
		m[n] = c;
		n++;
	}

	return (m);
}
