#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * str_concat - concat two string in new one
 * @s1: string array 1
 * @s2: string array 2
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int allsize, size1, size2, i, y;
	char *new;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size1 = 0;
	size2 = 0;
	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}
	allsize = size1 + size2;
	new = (char *)malloc(sizeof(char) * (allsize + 1));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		new[i] = s1[i];
		i++;
	}
	y = 0;
	while (s2[y] != '\0')
	{
		new[i++] = s2[y];
		y++;
	}
	new[i + 1] = '\0';
	return (new);
}
