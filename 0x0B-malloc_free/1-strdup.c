#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - 
 * @str:
 * Return: Array
 */
char *_strdup(char *str)
{
	int size, i;
	char *ptr;

	size = 0;
	while (str[size] != '\0')
	{
		size++
	}
	ptr = (char *)malloc(sizeof(char) * size);
	for(i = 0 ; i < size ; i++)
	{
		ptr[i] = str[i]
	}
	return (ptr);
}
