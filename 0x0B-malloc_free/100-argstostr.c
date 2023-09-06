#include "main.h"

/**
 * argstostr - function that turn every argments passed int string
 * @ac: number of args
 * @av: 2d pointer to pointer
 * Return: pointer to str
 */

char *argstostr(int ac, char **av)
{
	int i, j, size, x;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	size = 0;
	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] != '\0' ; j++)
			size++;
		size++;
	}
	size++;

	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);

	x = 0;
	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] != '\0' ; j++)
			str[x++] = av[i][j];
		str[x++] = '\n';
	}
	str[x] = '\0';
	return (str);
}
