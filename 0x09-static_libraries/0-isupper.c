#include "main.h"

/**
 * _isupper - function test char if it is upper or lower
 * @c: char
 * Return: (1) if upper , (0) if lower
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
