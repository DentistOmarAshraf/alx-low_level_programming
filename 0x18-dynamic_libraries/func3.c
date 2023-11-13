#include "main.h"
#include <stdio.h>
/**
 * _strcat - conactete two string
 * @dest: pointer to str (destination)
 * @src: pointer to str (source)
 * Return: pointer to string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0 ; dest[i] ; i++)
		;
	for (j = 0 ; src[j] ; j++)
		dest[i++] = src[j];
	dest[i] = '\0';
	return (dest);
}
/**
 * _strncat - conactete two string
 * @dest: pointer to str (destination)
 * @src: pointer to str (source)
 * @n: int
 * Return: pointer to str
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0 ; dest[i] ; i++)
		;
	for (j = 0 ; j < n && src[j] ; j++)
		dest[i++] = src[j];
	dest[i] = '\0';
	return (dest);
}
/**
 * _strncpy - copy bytes from src to dest
 * @dest: pointer of str (destination)
 * @src: pointer of str (source)
 * @n: int
 * Return: pointer of str
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] ; i++)
		dest[i] = src[i];
	for (; i < n ; i++)
		dest[i] = '\0';
	return (dest);
}
int main(void)
{
	char dest[] = "omar ";
	char src[] = "ashraf";

	printf("%s\n", _strncpy(dest, src, 3));
	return (0);
}
