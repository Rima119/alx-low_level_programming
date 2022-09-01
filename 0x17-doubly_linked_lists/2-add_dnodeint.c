#include "lists.h"

/**
 * add_dnodeint - function that adds a new node
 * at the beginning of a dlistint_t list
 * @head: a pointer to the head of doubly linked list
 * @n: new element's value
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *wnode;

	if (head == NULL)
		return (NULL);
	wnode = malloc(sizeof(dlistint_t));
	if (wnode == NULL)
		return (NULL);
	wnode->n = n;
	wnode->prev = NULL;
	wnode->next = NULL;
	if (*head == NULL)
	{
		*head = wnode;
		return (wnode);
	}
	if (*head != NULL)
	{
		wnode->next = *head;
		(*head)->prev = wnode;
	}
	*head = wnode;
	return (*head);
}
