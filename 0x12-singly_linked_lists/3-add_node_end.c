#include "lists.h"
#include <string.h>

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: head of the linked list
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t n;
	list_t *m, *p;

	m = malloc(sizeof(list_t));
	if (m == NULL)
	{
		return (NULL);
	}
	m->str = strdup(str);
	for (n = 0; str[n]; n++)
		;
	m->len = n;
	m->next = NULL;
	p = *head;

	if (p = NULL)
	{
		*head = m;
	}
	else
	{
		while (p->m != NULL)
		{
			p = p->next;
		}
		p->next = m;
	}
	return (*head);
}
