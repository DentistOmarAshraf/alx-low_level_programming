#include "main.h"

/**
 * _strncpy - cpy bytes from src to dest
 * @dest: pointer to st
 * @src: pointer to str
 * @n: int
 * Return: pointer to str
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];
	for (; i < n ; i++)
		dest[i] = '\0';

	return (dest);
}
