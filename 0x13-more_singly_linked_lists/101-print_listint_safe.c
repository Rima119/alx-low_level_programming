#include "lists.h"

/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: head of the linked list
 * Return: the number of nodes in the linked list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t p;

	if (head == NULL)
	{
		exit(98);
	}
	p = 0;
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		p++;
		if (head > head->next)
		{
			head = head->next;
		}
		else
		{
			head = head->next;
			printf("-> [%p] %d\n", (void *) head, head->n);
			break;
		}
	}
	return (p);
}
