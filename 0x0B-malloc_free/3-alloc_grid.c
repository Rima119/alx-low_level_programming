#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array
 * of integers
 * @width: width of array
 * @height: height of array
 * Return: a pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int **m;
	int n, p;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	m = malloc(sizeof(int *) * height);
	if (m == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < height; n++)
	{
		m[n] = malloc(sizeof(int) * width);
		if (m[n] == NULL)
		{
			while (--n >= 0)
			{
				free(m[n]);
			}
			free(m);
			return (NULL);
		}
	}
	for (n = 0; n < height; n++)
	{
		for (p = 0; p < width; p++)
		{
			m[n][p] = 0;
		}
	}
	return (m);
}
