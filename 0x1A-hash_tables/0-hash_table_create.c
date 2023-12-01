#include "hash_tables.h"
/**
 * hash_table_create - creating hash table
 * @size: unsigned long ini
 * Return: hash_table_t
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	size_t i;

	new = malloc(sizeof(hash_table_t));
	if (!new)
		return (NULL);
	new->size = size;
	new->array = malloc(sizeof(hash_node_t *) * size);
	if (!(new->array))
		return (NULL);
	return (new);
}
