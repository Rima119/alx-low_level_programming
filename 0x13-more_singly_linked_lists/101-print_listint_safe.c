#include "lists.h"

/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: head of the linked list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *m;
	size_t p;

	m = head;
	if (head == NULL)
	{
		exit(98);
	}
	p = 0;
	while (m != NULL)
	{
		printf("[%p] %d\n", (void *) m, m->n);
		p++;
		if (m > m->next)
		{
			m = m->next;
		}
		else
		{
			m = m->next;
			printf("-> [%p] %d\n", (void *) m, m->n);
			break;
		}
	}
	return (p);
}
