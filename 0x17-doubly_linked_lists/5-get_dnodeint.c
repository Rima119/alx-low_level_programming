#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of
 * a dlistint_t linked list
 * @head: a pointer to the head of doubly linked list
 * @index: the index of the node, starting from 0
 * Return: the nth node of a dlistint_t linked list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int p;
	dlistint_t *tmp;

	if (head == NULL)
		return (NULL);
	tmp = head;
	for (p = 0; tmp != NULL; p++)
	{
		if (p == index)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}
