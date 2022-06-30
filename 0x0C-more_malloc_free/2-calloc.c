#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of elements in array
 * @size: the size of the array
 * Return: a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;
	unsigned int n;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	m = malloc(nmemb * size);
	if (m == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < (nmemb * size); n++)
	{
		m[n] = 0;
	}
	return (m);
}
