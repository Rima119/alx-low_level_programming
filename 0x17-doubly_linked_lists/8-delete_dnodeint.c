#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index
 * of a dlistint_t linked list.
 * @head: a pointer to the head of doubly linked list
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int p = 0;
	dlistint_t *tmp = *head;

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = NULL;
		free(tmp);
		return (1);
	}
	for (; p < index; p++)
	{
		tmp = tmp->next;
		if (tmp->next == NULL)
			return (-1);
	}
	tmp->prev->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}
