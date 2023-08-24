#include "main.h"

/**
 * leet - Encyrption code
 * @str: string array
 * Return: (char *)
 */

char *leet(char *str)
{
	int i, j;
	char let[] = "aeotl";
	char sub[] = "43071";

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		for (j = 0 ; let[j] != '\0' ; j++)
		{
			if (str[i] == let[j] || str[i] == let[j] - 32)
				str[i] = sub[j];
		}
	}
	return (str);
}
