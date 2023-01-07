#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in a sorted list of integers
 * using the Jump search algorithm
 * @list: pointer to the head of the list to search in
 * @size: the number of nodes in list
 * @value: the value to search for
 * Return: pointer to the first node where value is located
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *h = list;
	size_t i, step;

	if (list == NULL || size == 0)
		return (NULL);
	step = sqrt(size);
	while (h->next != NULL)
	{
		list = h;

		for (i = 0; i < step; i++)
		{
			h = h->next;
			if (h->next == NULL)
				break;
		}
		printf("Value checked at index [%lu] = [%d]\n", h->index, h->n);
		if (h->n >= value)
			break;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", list->index,
		h->index);
	while (list != NULL && list != h->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}
	return (NULL);
}
