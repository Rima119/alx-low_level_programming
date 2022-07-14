#include "lists.h"

/**
 * list_len - function that returns the number of elements in linked list
 * @h: singly linked list
 * Return: the number of elements in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	size_t n;

	for (n = 0; h != NULL; n++)
	{
		h = h->next;
	}
	return (n);
}
