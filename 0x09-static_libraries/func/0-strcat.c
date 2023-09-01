#include "main.h"

/**
 * _strcat - append string to source
 * @dest: destination pointer to array
 * @src: pointer to string
 * Return: pointer
 */

char *_strcat(char *dest, char *src)
{
	int len, i;

	for (len = 0 ; dest[len] != '\0' ; len++)
		;
	for (i = 0 ; src[i] != '\0' ; i++)
		dest[len++] = src[i];
	dest[len] = '\0';
	return (dest);
}
