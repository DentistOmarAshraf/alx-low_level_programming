#include "main.h"

/**
 * _isdigit - check if char is number or not
 * @c: int ascii of char
 * Return: (1) if digit , (0) if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
