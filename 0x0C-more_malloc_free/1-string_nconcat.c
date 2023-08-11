#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concat string one to certin bytes of s2
 * @s1: string array one
 * @s2: string array two
 * @n: int (number of bytes)
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int size1, size2, allsize, i, j;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size1 = 0;
	while (s1[size1] != '\0')
	{
		size1++;
	}
	size2 = n;
	allsize = size1 + size2 + 1;
	ptr = (char *)malloc(sizeof(*ptr) * allsize);
	if (ptr == NULL)
		return (NULL);
	for (i = 0 ; s1[i] != '\0' ; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0 ; j < size2 ; j++)
	{
		ptr[i++] = s2[j];
	}
	ptr[i] = '\0';
	return (ptr);
}
