#include "hash_tables.h"
/**
 * hash_table_get - function to get value according key
 * @ht: pointer to hash_table_struct
 * @key: pointer to str
 * Return: pointer to str
 */

char *hash_table_get(hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *ptr;

	if (!ht || !key || *key == '\0')
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	ptr = ht->array[index];
	while (ptr)
	{
		if (_strcmp(ptr->key, (char *)key))
			return (ptr->value);
		ptr = ptr->next;
	}
	return (NULL);
}
