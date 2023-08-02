#include "main.h"
/**
 * _strcpy - copy array for dest array
 * @dest: destination arrray
 * @src: source array
 * Return: string array
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0 ; i <= len ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
