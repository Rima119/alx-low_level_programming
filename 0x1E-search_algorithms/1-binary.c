#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, L, R;

	if (array == NULL || size == 0)
		return (-1);
	for (L = 0, R = size - 1; R >= L;)
	{
		printf("Searching in array: ");
		for (i = L; i < R; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = L + (R - L) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			R = i - 1;
		else
			L = i + 1;
	}
	return (-1);
}
