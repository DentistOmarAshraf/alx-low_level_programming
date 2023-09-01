#include "main.h"

/**
 * _memset - change array element with char
 * @s: pointer to string
 * @b: char
 * @n: unsigned int
 * Return: pointer to string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n && s[i] != '\0' ; i++)
		s[i] = b;
	return (s);
}
