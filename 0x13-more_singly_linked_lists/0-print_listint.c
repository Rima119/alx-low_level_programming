#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: singly linked list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t m;

	for (m = 0; h != NULL; m++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (m);
}
