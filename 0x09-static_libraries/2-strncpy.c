#include "main.h"
/**
 * _strncpy - copies string array
 * @dest: the destnation array
 * @src: source array
 * @n: bytes from src
 * Return: array dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
