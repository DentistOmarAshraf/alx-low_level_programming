#include "main.h"

/**
 * _memcpy - copy from src to dest
 * @dest: pointer to string
 * @src: pointer to string
 * @n: unsigned int
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];
	return (dest);
}
