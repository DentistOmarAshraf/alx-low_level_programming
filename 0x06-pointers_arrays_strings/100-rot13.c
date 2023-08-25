#include "main.h"

/**
 * rot13 - every char exept numbers (-) 13
 * @str: string Array
 * Return: (char *)
 */

char *rot13(char *str)
{
	int i, j;
	char let[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char sub[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		for (j = 0 ; let[j] != '\0' ; j++)
		{
			if (str[i] == let[j])
			{
				str[i] = sub[j];
				break;
			}
		}
	}
	str[i] = '\0';
	return (str);
}
