#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function that searches for an integer.
 * @array: array
 * @size: the number of elements in the array array
 * @cmp: a pointer to the function to be used to compare values
 * Return: the index of the first element
 * for which the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (size < 1 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (n = 0; n < size; n++)
	{
		if (cmp(array[n]))
		{
			return (n);
		}
	}
	return (-1);
}
