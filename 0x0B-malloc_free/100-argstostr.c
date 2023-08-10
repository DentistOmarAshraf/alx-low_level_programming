#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - function take the argv[] and conactite in one string
 * @ac: int number of argc
 * @av: 2d array of argmrnts
 * Return: string Array
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int x, y, z, size;

	size = 0;
	for (x = 0 ; x < ac ; x++)
	{
		for (y = 0 ; av[x][y] != '\0' ; y++)
		{
			size++;
		}
		size++;
	}
	size++;

	str = (char *)malloc(sizeof(char) * size);
	if (str == NULL)
	{
		return (NULL);
	}

	z = 0;
	for (x = 0 ; x < ac ; x++)
	{
		for (y = 0 ; av[x][y] != '\0' ; y++)
		{
			str[z++] = av[x][y];
		}
		str[z++] = '\n';
	}
	str[z] = '\0';
	return (str);
}
