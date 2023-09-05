#include "main.h"

/**
 * _strdup - return pointer to malloced memo got a copy of poiinter
 * @str: pointer to string array
 * Return: malloced memo to copy of str
 */

char *_strdup(char *str)
{
	char *new;
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
		;
	new = malloc(sizeof(*new) * i);
	if (new == NULL || i == 0)
		return (NULL);

	for (i = 0 ; str[i] != '\0' ; i++)
		new[i] = str[i];
	new[i] = '\0';

	return (new);
}
