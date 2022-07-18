#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: head of the linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *m;

	if (head == NULL)
	{
		return;
	}
	while (head)
	{
		m = *head;
		*head = (*head)->next;
		free(m);
	}
}
