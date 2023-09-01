#include "main.h"

/**
 * _strcmp - compare 2 str
 * @s1: pointer to string array
 * @s2: pointer to string array
 * Return: s1 - s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0 ; s1[i] != '\0' && s2[i] != '\0' ; i++)
	{
		if (s1[i] == s2[i])
			continue;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}
