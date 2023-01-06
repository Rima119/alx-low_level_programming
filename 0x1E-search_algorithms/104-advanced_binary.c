#include "search_algos.h"

/**
 * bn_search - searches for a value in a sorted array of integers using the
 * Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @low: start index of the array to search in
 * @high: end index of the array to search in
 * @value: the value to search for
 * Return: the index where value is located
 */
int bn_search(int *array, size_t low, size_t high, int value)
{
	size_t i;

	if (high < low)
		return (-1);

	printf("Searching in array: ");
	for (i = low; i < high; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = low + (high - low) / 2;
	if (array[i] == value && (i == low || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (bn_search(array, low, i, value));
	return (bn_search(array, i + 1, high, value));
}

/**
 * advanced_binary - searches for a value in a sorted array of integers.
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (bn_search(array, 0, size - 1, value));
}
