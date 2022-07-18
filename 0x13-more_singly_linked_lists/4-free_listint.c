#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: head of the linked list
 */

void free_listint(listint_t *head)
{
	listint_t *m;

	while (head)
	{
		m = head;
		head = head->next;
		free(m);
	}
}
