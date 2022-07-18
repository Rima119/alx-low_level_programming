#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: head of the linked list
 * @index: the index of the node, starting at 0
 * Return: the nth node of a listint_t linked list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;

	while (a < index)
	{
		if (head->next == NULL)
		{
			return (NULL);
		}
		head = head->next;
		a++;
	}
	return (head);
}
