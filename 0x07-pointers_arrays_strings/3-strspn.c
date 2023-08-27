#include "main.h"
/**
 * _strspn - return number of bytes pointers look like
 * @s: pointer to string array
 * @accept: pointer to string array
 * Return: int (number of bytes)
 */

int _strspn(char *s, char *accept)
{
	int i, j, count;

	count = 0;
	for (i = 0 ; accept[i] != '\0' ; i++)
	{
		for (j = 0 ; s[j] != '\0' ; j++)
		{
			if (accept[i] == s[j])
			{
				count++;
				break;
			}
		}
	}
	count++;
	return (count);
}
