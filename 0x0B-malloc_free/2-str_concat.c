#include "main.h"

/**
 * str_concat - concat to str
 * @s1: pointer to str
 * @s2: pointer to str
 * Return:pointer to str
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, size, i, j;
	char *new;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0 ; s1[len1] != '\0' ; len1++)
		;
	for (len2 = 0 ; s2[len2] != '\0' ; len2++)
		;

	size = len1 + len2 + 1;
	new = malloc(sizeof(*new) * size);
	if (new == NULL)
		return (NULL);

	for (i = 0 ; i < len1 ; i++)
		new[i] = s1[i];
	for (j = 0 ; j < len2 ; j++)
		new[i++] = s2[j];
	new[i] = '\0';

	return (new);
}
