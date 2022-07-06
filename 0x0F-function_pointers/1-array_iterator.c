#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that executes a function given as a
 * parameter on each element of an array
 * @array: array
 * @size: the size of the array
 * @action: a pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if (action != NULL && array != NULL)
	{
		for (n = 0; n < size; n++)
		{
			action(array[n]);
		}
	}
}
