#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: a pointer to the head of doubly linked list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t m = 0;

	if (h == NULL)
		return (m);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		m++;
	}
	return (m);
}
