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
	dlistint_t *tmp, *wnode, *m;
	unsigned int p = 0;

	wnode = malloc(sizeof(dlistint_t));
	if (wnode == NULL || (h == NULL && idx > 0))
		return (NULL);
	wnode->n = n;
	wnode->next = NULL;
	wnode->prev = NULL;
	if (idx == 0)
		return (add_dnodeint(h, n));
	tmp = *h;
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
		m = tmp;
		tmp = tmp->next;
	}
	if (p == idx)
	{
		m->next = wnode;
		wnode->prev = m;
		return (wnode);
	}
	free(wnode);
	return (NULL);
}
