#include "hash_tables.h"

/**
 * key_index - function to get index from hash function
 * @key: pointer to str
 * @size: unsigned long int (size of array)
 * Return: index (unsigned long int)
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	unsigned long int ret;

	hash = hash_djb2(key);
	ret = hash % size;

	return (ret);
}
