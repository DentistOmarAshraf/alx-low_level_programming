#include "hash_tables.h"

/**
 * hash_table_delete - deleting all the elements
 * @ht: pointer to hash table
 * Return: NONE
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr;
	hash_node_t *cur;

	for (i = 0 ; i < ht->size ; i++)
	{
		ptr = ht->array[i];
		while (ptr)
		{
			cur = ptr;
			ptr = ptr->next;
			if (cur->key)
				free(cur->key);
			if (cur->value)
				free(cur->value);
			free(cur);
		}
		ht->array[i] = NULL;
	}
	free(ht->array);
	free(ht);
	ht = NULL;
}
