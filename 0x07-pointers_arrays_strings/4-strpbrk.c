#include "main.h"

/**
 * _strpbrk - locate first occurance in the string s any byte in accept
 * @s: string pointer
 * @accept: string pointer
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	if (s[i] == '\0')
		return (s + i);
	return (NULL);
}
