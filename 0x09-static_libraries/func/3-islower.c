#include <stdio.h>

/**
 * _islower - check if char is lower
 * @c: char
 * Return: (1) if lower, (0) if not
 */

int _islower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
