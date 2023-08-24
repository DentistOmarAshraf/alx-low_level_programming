#include "main.h"

/**
 * leet - Encyrption code
 * @str: string array
 * Return: (char *)
 */

char *leet(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[i] == 'a' || str[i] == 'A')
			str[i] = '4';
		if (str[i] == 'e' || str[i] == 'E')
			str[i] = '3';
		if (str[i] == 'o' || str[i] == 'O')
			str[i] = '0';
		if (str[i] == 't' || str[i] == 'T')
			str[i] = '7';
		if (str[i] == 'l' || str[i] == 'L')
			str[i] = '1';
	}
	str[i] = '\0';
	return (str);
}
