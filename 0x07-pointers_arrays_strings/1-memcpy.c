#include "main.h"
/**
 * _memcpy - copy from src to dest
 * @dest: pointer to desination array
 * @src: pointer to source array
 * @n: size of bytes to be copied
 * Return: pointer to array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
