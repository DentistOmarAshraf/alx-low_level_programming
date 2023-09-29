#include "main.h"
/**
 * _isbin - check if the array is bin number or not
 * @s: pointer to str
 * Return: 1 if yes 0 if no
 */
int _isbin(const char *s)
{
	int x;

	for (x = 0 ; s[x] ; x++)
	{
		if (s[x] == '0' || s[x] == '1')
			continue;
		else
			return (0);
	}
	return (1);
}

/**
 * binary_to_uint - converting number from binary to Unsigned int
 * @s: pointer to str
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *s)
{
	unsigned int tosend, base;
	int len, x, i, y;

	if (!_isbin(s) || !s)
		return (0);

	tosend = 0;
	for (len = 0 ; s[len] ; len++)
		;
	for (i = len - 1, x = 0 ; i >= 0 ; x++, i--)
	{
		if (s[i] == '1')
		{
			base = 1;
			if (!x)
				tosend += 1;
			else
			{
				for (y = 1 ; y <= x ; y++)
					base *= 2;
				tosend += base;
			}
		}
	}
		return (tosend);
}
