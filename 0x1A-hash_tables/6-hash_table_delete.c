#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *t1, *t2;
	unsigned long int n;

	if (ht == NULL)
		return;
	for (n = 0; n < ht->size; n++)
	{
		t1 = ht->array[n];
		while (t1 != NULL)
		{
			t2 = t1;
			t1 = t1->next;
			free(t2->key);
			free(t2->value);
			free(t2);
		}
	}
	free(ht->array);
	free(ht);
}
