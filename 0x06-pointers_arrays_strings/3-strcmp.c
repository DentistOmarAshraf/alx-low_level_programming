#include "main.h"

/**
 * _strcmp - compare between 2 strings
 * @s1: first array
 * @s2: seconed one
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i, n;

	n = 0;
	for (i = 0 ; s1[i] != '\0' && s2[i] != '\0' ; i++)
		{
		if (s1[i] == s2[i])
			continue;
		else
		{
			n = s1[i] - s2[i];
			break;
		}
		}
	return (n);
}
