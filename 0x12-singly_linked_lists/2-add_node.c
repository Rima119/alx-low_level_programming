#include "lists.h"
#include <string.h>

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: head of the linked list
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t n;
	list_t *m;

	m = malloc(sizeof(list_t));
	if (m == NULL)
	{
		return (NULL);
	}
	m->str = strdup(str);
	for (n = 0; str[n]; n++)
		;
	m->len = n;
	m->next = *head;
	*head = m;
	return (*head);
}
