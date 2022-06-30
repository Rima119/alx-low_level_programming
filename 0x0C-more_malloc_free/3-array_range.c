#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: minimum integers of an array
 * @max: maximum integers of an array
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *m;
	int n;

	if (max < min)
	{
		return (NULL);
	}
	m = = malloc(sizeof(*m) * ((max - min) + 1));
	if (m == NULL)
	{
		return (NULL);
	}
	for (n = 0; max >= min; n++, min++)
	{
		m[n] = min;
	}
	return (m);
}
