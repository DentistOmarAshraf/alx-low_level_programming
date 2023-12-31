#include "hash_tables.h"

/**
 * hash_table_print - print keys and value in hash table
 * @ht: pointer to hash_table_t
 * Return: NONE
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *head;
	unsigned long int i;
	int count = 0;

	if (ht == NULL)
		return;
	printf("{");
	i = 0;
	while (i < ht->size)
	{
		head = ht->array[i];
		while (head)
		{
			if (count)
				printf(", ");
			printf("'%s': '%s'", head->key, head->value);
			head = head->next;
			count++;
		}
		i++;
	}
	printf("}\n");
}
