#include "main.h"

/**
 * string_toupper - make all char in uppercase
 * @s: pointer to array
 * Return: return pointer to arr
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		else
			s[i] = s[i];
	}
	s[i] = '\0';
	return (s);
}
