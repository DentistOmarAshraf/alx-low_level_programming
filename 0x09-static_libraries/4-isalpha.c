#include "main.h"
/**
 * _isalpha - Check if char is alpha
 * @c: type int char
 * Return: 1 if letter 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
