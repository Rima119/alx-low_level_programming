#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t p, l, h;

	if (array == NULL)
		return (-1);
	for (l = 0, h = size - 1; h >= l;)
	{
		p = l + (double)(h - l) / (array[h] - array[l]) * (value - array[l]);
		if (p < size)
			printf("Value checked array[%ld] = [%d]\n", p, array[p]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", p);
			break;
		}

		if (array[p] == value)
			return (p);
		if (value < array[p])
			h = p - 1;
		else
			l = p + 1;
	}
	return (-1);
}
