#include "main.h"

/**
 * _strcpy - cpy str
 * @dest: pointer to str
 * @src: pointer to str
 * Return: pointer to str
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; dest[i] != '\0' ; i++)
		dest[i] = src[i];
	return (dest);
}
