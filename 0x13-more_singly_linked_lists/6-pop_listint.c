#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: head of the linked list
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *m;
	int a;

	if (*head == NULL)
	{
		return (0);
	}
	m = *head;
	a = m->n;
	*head = m->next;
	free(m);
	return (a);
}
