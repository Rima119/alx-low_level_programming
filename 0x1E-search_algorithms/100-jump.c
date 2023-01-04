#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers using
 * the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a = 0, b = 0;

	if (array == NULL || size == 0)
		return (-1);
	while (array[b] < value)
	{
		if (b == 1)
			b = 0;
		printf("Value checked array[%ld] = [%d]\n", b, array[b]);
		a = b;
		b += sqrt(size);
		if (a >= size)
			return (-1);
		if (b > size - 1)
			break;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", a, b);
	while (array[a] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		a += 1;
		if (a > size - 1)
			return (-1);
	}
	if (array[a] == value)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		return (a);
	}
	else
		return (-1);
}
