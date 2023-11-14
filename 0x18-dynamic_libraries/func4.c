#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memcpy - copy from pointer to pointer
 * @dest: pointer to str (destination)
 * @src: pointer to str (source)
 * @n: size_t
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, size_t n)
{
	size_t i;

	for (i = 0 ; i < n && src[i] ; i++)
		dest[i] = src[i];
	return (dest);
}
/**
 * _strchr - function return pointer to first occurance of char c
 * @str: pointer to str
 * @c: char
 * Return: pointer to str
 */
char *_strchr(char *str, char c)
{
	int i;

	for (i = 0 ; str[i] ; i++)
		if (str[i] == c)
			return (str + i);
	if (str[i] == c)
		return (str + i);
	return (NULL);
}
/**
 * _strspn - calculate intial segment of s that consist accept
 * @s: pointer to str
 * @accept: pointer to str
 * Return: size_t
 */
size_t _strspn(char *s, char *accept)
{
	size_t i, j, count;

	count = 0;
	for (i = 0 ; accept[i] ; i++)
		for (j = 0 ; s[j] ; j++)
		{
			if (accept[i] == s[j])
				count++;
			if (s[j] == ' ')
				break;
		}
	return (count);
}
/**
 * _strpbrk - check the occ of str
 * @s: pointer to str
 * @accept: ptr to str
 * Return: pointer to str
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0 ; s[i] ; i++)
		for (j = 0 ; accept[j] ; j++)
			if (s[i] == accept[j])
				return (s + i);
	return (NULL);
}
/**
 * _strstr - check occ of str
 * @hay: pointer to str
 * @ned: pointer to str
 * Return: pointer to str
 */
char *_strstr(char *hay, char *ned)
{
	int i, j;

	for (i = 0 ; hay[i] ; i++)
	{
		for (j = 0 ; ned[j] && hay[i + j] == ned[j] ; j++)
			if (hay[i + j] != ned[j])
				break;
		if (ned[j] == '\0')
			return (hay + i);
	}
	return (NULL);
}
