#include "main.h"
/**
 * _strlen - string len
 * @s: pointer to str
 * Return: int
 */
int _strlen(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen(s + 1));
}
/**
 * count_word - count words in string
 * @str: pointer to str
 * Return: int
 */

int count_word(char *str)
{
	int i, spc;

	spc = 0;
	for (i = 0 ; str[i] ; i++)
	{
		if (i && str[i] == ' ' && str[i - 1] != ' ')
			spc++;
	}
	if (str[i] == '\0' && str[i - 1] != ' ')
		spc++;
	return (spc);
}
/**
 * strtow - string to words in 2d array
 * @str: pointer to str
 * Return: pointer to pointer
 */

char **strtow(char *str)
{
	char **new;
	int words, i, j, count, count2;

	if (str == NULL || count_word(str) == 0 || _strlen(str) == 0)
		return (NULL);
	words = count_word(str);
	new = malloc(sizeof(char *) * (words + 1));
	if (new == NULL)
		return (NULL);

	count = 0;
	count2 = 0;
	for (i = 0 ; i < words ; i++)
	{
		while (str[count] == ' ')
			count++;
		for (j = 0 ; str[count] != ' ' && str[count]; j++, count++)
			;
		new[i] = malloc(sizeof(char) * (j + 1));
		if (new == NULL)
		{
			for (i = 0 ; i < words ; i++)
				free(new[i]);
			free(new);
			return (NULL);
		}
		while (str[count2] == ' ')
			count2++;
		for (j = 0 ; str[count2] != ' ' && str[count2] ; j++, count2++)
			new[i][j] = str[count2];
	}
	return (new);
}
