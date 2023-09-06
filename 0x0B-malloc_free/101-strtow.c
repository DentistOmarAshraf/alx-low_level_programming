#include "main.h"
#include <stdio.h>
/**
 * strtow - split a string of words to 2d array of words
 * @str: pointer to str
 * Return: pointer to array
 */

char **strtow(char *str)
{
	char **new;
	int i, j, spc, count, count2;

	if (str == NULL)
		return (NULL);
	spc = 0;
	for (i = 0 ; str[i] ; i++)
		if (i && str[i] == ' ' && str[i - 1] != ' ')
			spc++;
	if (str[i] == '\0' && str[i - 1] != ' ')
		spc++;
	printf("%d\n", spc);
	new = malloc(sizeof(char *) * spc);
	if (new == NULL)
		return (NULL);
	count = 0;
	count2 = 0;
	for (i = 0 ; i < spc ; i++)
	{
		for (j = 0 ; str[count] != ' ' && str[count]; j++, count++)
			printf("i = %d j = %d\n  c = %c\n", i,j,str[count]);
		new[i] = malloc(sizeof(char) * j);
		if (new == NULL)
		{
			for (i = 0 ; i < spc ; i++)
				free(new[i]);
			free(new);
			return (NULL);
		}
		for (j = 0 ; str[count2] != ' ' && str[count2]; j++, count2++)
		{
			new[i][j] = str[count2];
			printf("new[i][j] = %c\n", new[i][j]);
		}

		while (str[count] == ' ')
			count++;
		while (str[count2] == ' ')
			count2++;
	}
	return (new);
}
