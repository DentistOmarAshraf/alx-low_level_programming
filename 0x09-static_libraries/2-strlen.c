#include "main.h"
/**
 * _strlen - count the element of array
 * @s: string array
 * Return: length of a string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
