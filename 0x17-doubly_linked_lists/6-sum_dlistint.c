#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of
 * all the data (n) of a dlistint_t linked list.
 * @head: a pointer to the head of doubly linked list
 * Return: the sum of all the data (n) of a linked list
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *m;
	int p = 0;

	if (head == NULL)
		return (p);
	m = head;
	while (m != NULL)
	{
		p += m->n;
		m = m->next;
	}
	return (p);
}
