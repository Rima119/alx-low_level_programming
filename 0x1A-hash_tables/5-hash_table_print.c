#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int n, m = 0;

	if (ht == NULL)
		return;

	if (ht != NULL)
	{
		printf("{");
		for (n = 0; n < ht->size; n++)
		{
			temp = ht->array[n];
			while (temp != NULL)
			{
				if (m != 0)
					printf(", ");
				m = 1;
				printf("'%s': '%s'", temp->key, temp->value);
				temp = temp->next;
			}
		}
		printf("}\n");
	}
}
