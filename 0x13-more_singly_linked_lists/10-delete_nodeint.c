#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * index of a listint_t linked list.
 * @head: head of the linked list
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *m, *b;
	unsigned int a;

	b = *head;
	if (b == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(b);
		return (1);
	}
	for (a = 0; a < (index - 1); a++)
	{
		if (b->next == NULL)
		{
			return (-1);
		}
		b = b->next;
	}
	m = b->next;
	b->next = m->next;
	free(m);
	return (1);
}
