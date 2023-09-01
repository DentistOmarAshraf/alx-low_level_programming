#include "main.h"

/**
 * _strstr - check occuranc of str
 * @haystack: pointer to str
 * @needle: pointer to str
 * Return: pointer to str
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0 ; haystack[i] != '\0' ; i++)
	{
		for (j = 0 ; needle[j] != '\0' && haystack[i + j] == needle[j] ; j++)
			if (haystack[i + j] != needle[j])
				break;
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return ('\0');
}
