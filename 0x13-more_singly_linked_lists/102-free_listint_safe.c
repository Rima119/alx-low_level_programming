#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list.
 * @h: head of the linked list
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *m, *b;
	size_t a = 0;

	m = *h;
	while (m != NULL)
	{
		a += 1;
		b = m;
		m = m->next;
		free(b);
		
		if (b < m)
			break;
	}
	*h = NULL;
	return (a);
}
