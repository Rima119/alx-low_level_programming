#include "lists.h"

/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: head of the linked list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *m, *b;
	size_t p = 0;

	m = *head;
	if (m == NULL)
	{
		exit(98);
	}
	while (m != NULL)
	{
		b = m;
		m = m->next;
		p++;
		printf("[%p] %d\n", (void *)b, b->n);
		if (b < m)
		{
			printf("-> [%p] %d\n", (void *)m, m->n);
			break;
		}
	}
	return (p);
}
