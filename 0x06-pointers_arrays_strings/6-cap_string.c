#include "main.h"

/**
 * is_sep - function to check separetor
 * @c: char
 * Return: 1 if sep 0 if not
 */

int is_sep(char c)
{
	int i;
	char *str = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0' ; i++)
	{
		if (c == str[i])
			return (1);
	}
	return (0);
}

/**
 * cap_string - captilize first letter of words
 * @str: string array
 * Return: char *
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		if (str[i] >= 'a' && str[i] <= 'z' && (is_sep(str[i - 1])))
		{
			str[i] = str[i] - 32;
			if (str[i - 1] == '\t')
				str[i - 1] = ' ';
		}
		else
			str[i] = str[i];
	}
	str[i] = '\0';
	return (str);
}
