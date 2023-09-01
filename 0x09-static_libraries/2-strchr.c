#include "main.h"

/**
 * _strchr - reutrn pointer when occur c
 * @s: pointer to str
 * @c: char
 * Return: pointer to str
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
		if (s[i] == c)
			return (s + i);
	if (s[i] == c)
		return (s + i);
	return ('\0');
}
