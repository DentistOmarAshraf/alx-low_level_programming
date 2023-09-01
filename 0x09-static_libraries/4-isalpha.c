#include <stdio.h>

/**
 * _isalpha - chaeck c if char or not
 * @c: char
 * Return: (1) if alpha (0) if not
 */

int _isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
