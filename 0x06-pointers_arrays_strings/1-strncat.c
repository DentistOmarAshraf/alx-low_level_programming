#include "main.h"

/**
 * _strncat - append src to dest according to n
 * @dest: destination string
 * @src: source
 * @n: int n
 * Return: char* type
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	len = 0;
	while (dest[len] != '\0')
		len++;
	for (i = 0 ; i < n ; i++)
	{
		dest[len++] = src[i];
		if (src[i] == '\0')
			break;
	}
	dest[len] = '\0';
	return (dest);
}
