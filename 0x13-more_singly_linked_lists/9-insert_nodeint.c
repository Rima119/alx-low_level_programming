#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts
 * a new node at a given position
 * @head: head of the linked list
 * @idx: the index of the list where the new node should be added.
 * @n: integer
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *m, *b;
	unsigned int a;

	b = *head;
	m = malloc(sizeof(listint_t));
	if (m == NULL)
	{
		return (NULL);
	}
	m->n = n;
	if (idx == 0)
	{
		m->next = b;
		*head = m;
		return (*head);
	}
	for (a = 0; a < (idx - 1); a++)
	{
		if (b == NULL || b->next == NULL)
		{
			return (NULL);
		}
		b = b->next;
	}
	m->next = b->next;
	b->next = m;
	return (m);
}
