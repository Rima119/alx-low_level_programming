#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements
 * in a linked dlistint_t list
 * @h: a pointer to the head of doubly linked list
 * Return: the number of elements in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t m = 0;

	if (h == NULL)
		return (m);
	while (h != NULL)
	{
		h = h->next;
		m++;
	}
	return (m);
}
