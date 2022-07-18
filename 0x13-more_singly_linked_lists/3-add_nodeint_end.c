#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list.
 * @head: head of the linked list
 * @n: integer
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *m, *c;

	c = *head;
	while (c && c->next != NULL)
	{
		c = c->next;
	}
	m = malloc(sizeof(listint_t));
	if (m == NULL)
	{
		return (NULL);
	}
	m->n = n;
	m->next = NULL;

	if (c != NULL)
	{
		c->next = m;
	}
	else
	{
		*head = m;
	}
	return (m);
}
