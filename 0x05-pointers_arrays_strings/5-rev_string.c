#include "main.h"
/**
 * rev_string - reverse string and save it in the same var
 * @s: string array
 * Return: void none
 */

void rev_string(char *s)
{
	char temp;
	int x, y, len;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}

	len = x - 1;
	for (y = 0 ; y < x / 2 ; y++)
	{
		temp  = s[y];
		s[y] = s[len];
		s[len--] = temp;
	}
}
