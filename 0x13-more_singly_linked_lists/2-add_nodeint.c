#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @head: head of the linked list
 * @n: integer
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *m;

	m = malloc(sizeof(listint_t));
	if (m == NULL)
	{
		return (NULL);
	}
	m->n = n;
	m->next = *head;
	*head = m;
	return (*head);
}
