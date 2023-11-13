#include "main.h"

/**
 * _putchar - write char to stdout
 * @c: char
 * Return: 1 in success, -1 on fail
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _islower - check if the letter is lower or upper case
 * @c: int (char in ascii)
 * Return: 1 if lower (0) if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
/**
 * _isupper - check id the letter us upper or lower case
 * @c: int (char in ascii)
 * Return: 1 if upper (0) if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
/**
 * _isalpha - function check if param is alphabet letter
 * @c: int (according to ascii)
 * Return: 1 if alpha (0) if not
 */
int _isalpha(int c)
{
	if (_islower(c) || _isupper(c))
		return (1);
	return (0);
}
/**
 * _abs - return absolute of number
 * @n: int
 * Return: if n < 0 return n * -1 else return n
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
