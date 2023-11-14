#include "main.h"
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
/**
 * _strcmp - compare tow string
 * @s1: pointer to str
 * @s2: poniter to str
 * Return: 1 if Identical 0 if not
 */
int _strcmp(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);
	if (*s1 == *s2)
		return (_strcmp(s1 + 1, s2 + 1));
	else
		return (0);
}
/**
 * _memset - setting first n bytes of pointer
 * @s: pointer to str
 * @b: char
 * @n: int
 * Return: pointer to str
 */
char *_memset(char *s, char b, size_t n)
{
	size_t i;

	for (i = 0 ; i < n && s[i]; i++)
		s[i] = b;
	return (s);
}
