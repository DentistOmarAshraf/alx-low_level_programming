#include "main.h"

/**
 * string_nconcat - concat to str and return new pointer
 * @s1: pointer to str
 * @s2: pointer to str
 * @n: unsigned int
 * Return: ptr to str
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, total, i, j;
	char *new;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0 ; s1[len1] ; len1++)
		;
	for (len2 = 0 ; len2 < n ; len2++)
		;

	total = len1 + len2 + 1;

	new = malloc(sizeof(*new) * total);
	if (new == NULL)
		exit(98);

	for (i = 0 ; i < len1 ; i++)
		new[i] = s1[i];
	for (j = 0 ; j < n ; j++)
		new[i++] = s2[j];
	new[i] = '\0';
	return (new);
}
