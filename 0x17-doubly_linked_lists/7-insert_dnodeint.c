#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a
 * new node at a given position
 * @h: a pointer to the head of doubly linked list
 * @idx: the index of the list where the new node should be added
 * @n: new element's value
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *wnode;
	unsigned int p;

	wnode = malloc(sizeof(dlistint_t));
	if (wnode == NULL)
		return (NULL);
	wnode->n = n;
	wnode->next = NULL;
	wnode->prev = NULL;
	if (*h == NULL)
	{
		*h = wnode;
		return (*h);
	}
	if (idx == 0)
		return (add_dnodeint(h, n));
	p = 1;
	tmp = (*h)->next;
	while (tmp != NULL)
	{
		if (p == idx && idx != 0)
		{
			tmp->prev->next = wnode;
			wnode->prev = tmp->prev;
			wnode->next = tmp;
			tmp->prev = wnode;
			return (wnode);
		}
		p++;
		tmp = tmp->next;
	}
	if (p == idx)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
