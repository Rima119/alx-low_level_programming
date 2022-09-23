#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: the size of the array
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h;
	unsigned long int n = 0;

	if (size == 0)
		return (NULL);
	h = malloc(sizeof(hash_table_t));
	if (h == NULL)
		return (NULL);
	h->array = calloc(size, sizeof(hash_node_t *));
	h->size = size;
	if (h->array == NULL)
	{
		free(h);
		return (NULL);
	}
	while (n < size)
	{
		h->array[n] = NULL;
		n++;
	}
	return (h);
}
