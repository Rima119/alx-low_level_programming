#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: singly linked list
 * Return: the number of elements in a linked listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t m;

	for (m = 0; h != NULL; m++)
	{
		h = h->next;
	}
	return (m);
}
