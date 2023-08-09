#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function copy string
 * @str: string array
 * Return: Array
 */
char *_strdup(char *str)
{
	int size, i;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		size = 0;
		while (str[size] != '\0')
		{
			size++;
		}
		ptr = (char *)malloc(sizeof(char) * size);
		if (ptr == NULL)
		{
			return (NULL);
		}
		for (i = 0 ; i < size ; i++)
		{
			ptr[i] = str[i];
		}
	return (ptr);
	}
}
