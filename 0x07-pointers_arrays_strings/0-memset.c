#include "main.h"

/**
 * _memset - write first byte of char *
 * @s: array pointer
 * @b: char
 * @n: number of bytes
 * Return: char *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i, len;

	for (len = 0 ; s[len] != '\0'; len++)
		;
	for (i = 0 ; i < n; i++)
		s[i] = b;
	s[len] = '\0';

	return (s);
}
