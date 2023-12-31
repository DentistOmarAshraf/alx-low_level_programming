#include "hash_tables.h"
/**
 * _strlen - function to return string length
 * @s: pointer to str
 * Return: int
 */
int _strlen(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen(s + 1));
}
/**
 * _strcmp - string compare function
 * @s1: pointer to str
 * @s2: pointer to str
 * Return: 1 if identical 0 if not
 */
int _strcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (_strcmp(s1 + 1, s2 + 1));
	return (0);
}
/**
 * _copy - function I made to copy const
 * @str: pointer to str
 * Return: pointer to str
 */

char *_copy(const char *str)
{
	int i;
	char *new;

	for (i = 0 ; str[i] ; i++)
		;
	new = malloc(sizeof(char) * (i + 1));
	if (!new)
		return (NULL);
	for (i = 0 ; str[i] ; i++)
		new[i] = str[i];
	new[i] = '\0';
	return (new);
}

/**
 * add_node - adding node to linked list
 * @head: pointer to head of linked list (hash_node_t)
 * @key: pointer to string
 * @value: pointer to string
 * Return: pointer to new node
 */

hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (NULL);
	new->key = _copy(key);
	new->value = _copy(value);
	if (!*head)
	{
		*head = new;
		new->next = NULL;
		return (new);
	}
	new->next = *head;
	*head = new;
	return (new);
}

/**
 * hash_table_set - setting elemnt at hash table
 * @ht: pointer to hash table
 * @key: pointer to str
 * @value: pointer to str
 * Return: 1 on success 0 on fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *chk;
	hash_node_t **ptr;
	hash_node_t *head;

	if (!key || (_strlen((char *)key) == 0) || !ht)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	ptr = &(ht->array[index]);
	head = *ptr;
	while (head)
	{
		if (_strcmp(head->key, (char *)key))
		{
			free(head->value);
			head->value = _copy(value);
			return (1);
		}
		head = head->next;
	}
	chk = add_node(ptr, key, value);
	if (!chk)
		return (0);
	return (1);
}
