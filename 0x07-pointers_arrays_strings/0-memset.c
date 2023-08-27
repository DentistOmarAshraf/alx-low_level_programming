#include "main.h"

/**
 * _memset - function change the first bytes of string
 * @s: pointer to string array
 * @b: char
 * @n: int number of bytes
 * Return: char *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		s[i] = b;
	s[i] = '\0';
	return (s);
}
