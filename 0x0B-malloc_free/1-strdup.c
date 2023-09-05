#include "main.h"

/**
 * _strdup - return pointer to malloced memo got a copy of poiinter
 * @str: pointer to string array
 * Return: malloced memo to copy of str
 */

char *_strdup(char *str)
{
	char *new;
	int len, i;


	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0' ; len++)
		;
	len++;

	new = malloc(sizeof(*new) * len);
	if (new == NULL)
		return (NULL);

	for (i = 0 ; i < len ; i++)
		new[i] = str[i];
	new[i] = '\0';

	return (new);
}
