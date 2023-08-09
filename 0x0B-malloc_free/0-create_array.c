#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - intializes it with same char
 * @size: unsigned int represent size of array
 * @c: the charahcter to be filled in the entire array
 * Return: Poninter
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = (char *)malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (i < size)
		{
			ptr[i] = c;
			i++;
		}
	}
	return (ptr);
}
