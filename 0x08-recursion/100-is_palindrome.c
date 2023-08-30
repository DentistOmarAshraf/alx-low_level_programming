#include "main.h"

/**
 * _strlen - function to string len
 * @s: pointer to string
 * Return: int
 */

int _strlen(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * _pali - check the palindrome of text
 * @s: pointer to string
 * @x: strlen of *s
 * Return: 1 if palindrome 0 if not
 */

int _pali(char *s, int x)
{
	if (*s != *(s + x))
		return (0);
	if (*s == '\0')
		return (1);
	return (_pali(s + 1, x - 2));
}

/**
 * is_palindrome - check palindrome
 * @s: pointer to string
 * Return: 1 if palindrome 0 if not
 */

int is_palindrome(char *s)
{
	int n;

	n = _strlen(s) - 1;
	return (_pali(s, n));
}
