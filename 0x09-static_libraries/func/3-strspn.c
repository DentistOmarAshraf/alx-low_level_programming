#include "main.h"

/**
 * _strspn - return number of occuranc in first aspect
 * @s: pointer to str
 * @accept: chars
 * Return: int of counts
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;

	count = 0;
	for (i = 0 ; accept[i] != '\0' ; i++)
	{
		for (j = 0 ; s[j] != '\0' ; j++)
		{
			if (accept[i] == s[j])
				count++;
			if (s[j] == ' ')
				break;
		}
	}
	return (count);
}
