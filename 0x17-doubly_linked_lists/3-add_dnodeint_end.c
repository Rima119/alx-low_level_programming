#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the
 * end of a dlistint_t list
 * @head: a pointer to the head of doubly linked list
 * @n: new element's value
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t wnode, m;

	wnode = malloc(sizeof(dlistint_t));
	if (wnode == NULL)
	{
		return (NULL);
	}
	wnode->n = n;
	wnode->next = NULL;
	if (head != NULL)
	{
		m = *head;
		while (m->next != NULL)
		{
			m = m->next;
		}
		m->next = wnode;
	}
	else
	{
		*head = wnode;
	}
	wnode->prev = m;
	return (wnode);
}
