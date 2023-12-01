#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct hash_node_s - Node of hash table
 *
 * @key: the key, string
 * @value: The Value corresponding to the key
 * @next: pointer to next node of the list
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - hast table data structure
 *
 * @size: the size of the array
 * @array: An array of size @size
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;
/***********functions***************/
hash_table_t *hash_table_create(unsigned long int);

#endif
