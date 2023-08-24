#include "main.h"

/**
 * _strncpy - copy str to dest
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len, i;

	len = 0;
	while (dest[len] != '\0')
		len++;
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];
/*	dest[len] = '\0';*/
	return (dest);
}
