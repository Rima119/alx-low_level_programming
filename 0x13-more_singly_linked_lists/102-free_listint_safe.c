#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list.
 * @h: head of the linked list
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *m;
	size_t a = 0;

	m = *h;
	while (m != NULL)
	{
		a += 1;
		if (m > m->next)
		{
			m = m->next;
			free(m);
		}
		else
		{
			free(m);
			m = NULL;
		}
	}
	*h = NULL;
	return (a);
}
