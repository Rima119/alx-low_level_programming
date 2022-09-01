#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: a pointer to the head of doubly linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head == NULL)
		return;
	tmp = head;
	while (tmp)
	{
		head = tmp;
		tmp = tmp->next;
		free(head);
	}
	free(tmp);
}
