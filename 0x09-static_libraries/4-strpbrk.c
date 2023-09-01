#include "main.h"

/**
 * _strpbrk - check the occ of str
 * @s: the string to compare
 * @accept: ptr to str
 * Return: pointer to str
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0 ; s[i] != '\0' ; i++)
		for (j = 0 ; accept[j] != '\0' ; j++)
			if (s[i] == accept[j])
				return (s + i);
	return ('\0');
}
