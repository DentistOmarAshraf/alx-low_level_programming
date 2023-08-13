#include "main.h"
/**
 * _strlen - string length recurisivaly
 * @s: string array
 * Return: int value of string length
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}
/**
 * compare - compare element from benginig until last
 * @s: string array
 * @n: length of the array
 * Return: 0 if not palindome else (1)
 */

int compare(char *s, int n)
{
	if (*s != s[n])
		return (0);
	if (*s == 0)
		return (1);
	return (compare(s + 1, n - 2));
}

/**
 * is_palindrome - main function
 * @s: string array
 * Return: 1 if palindome  else 0
 */
int is_palindrome(char *s)
{
	int n = _strlen(s) - 1;

	return (compare(s, n));
}
