#include "main.h"

/**
 * _strncat - cpy from src to dest
 * @dest: pointer to str
 * @src: pointer to str
 * @n: int bytes
 * Return: pointer to str
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, len;

	for (len = 0 ; dest[len] != '\0' ; len++)
		;
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[len++] = src[i];
	dest[len] = '\0';

	return (dest);
}
