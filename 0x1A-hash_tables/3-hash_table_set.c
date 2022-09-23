#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key
 * @value: the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *temp;
	unsigned long int n;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	n = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[n];

	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}

	temp = malloc(sizeof(hash_node_t));
	if (temp == NULL)
		return (0);
	temp->key = strdup(key);
	temp->value = strdup(value);
	temp->next = NULL;

	if (ht->array[n] != NULL)
		temp->next = ht->array[n];
	ht->array[n] = temp;

	return (1);
}
