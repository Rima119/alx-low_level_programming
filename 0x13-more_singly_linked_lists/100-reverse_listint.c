#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: head of the linked list
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *m, *b;

	m = NULL;
	b = NULL;
	while (*head != NULL)
	{
		m = (*head)->next;
		(*head)->next = b;
		b = *head;
		*head = m;
	}
	*head = b;
	return (*head);
}
