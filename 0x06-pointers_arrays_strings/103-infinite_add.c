#include "main.h"
/**
 * infinite_add - add unmbers of 2 array
 * @n1: array one
 * @n2: array two
 * @r: array result
 * @size_r: size of array
 * Return: array or 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, x, y, z, carry, n, len;
	char temp;

	for (len1 = 0 ; n1[len1] != '\0' ; len1++)
		;
	for (len2 = 0; n2[len2] != '\0' ; len2++)
		;
	if (len1 > size_r || len2 > size_r)
		return (0);

	carry = 0;
	for (x = len1 - 1, y = len2 - 1, z = 0 ; z < size_r - 1 ; x--, y--, z++)
	{
		n = carry;

		if (x >= 0)
			n += n1[x] - '0';
		if (y >= 0)
			n += n2[y] - '0';

		if (x < 0 && y < 0 && n == 0)
			break;
		carry = n / 10;
		r[z] = (n % 10) + '0';
	}
	if (x >= 0 || y >= 0 || carry != 0)
		return (0);
	r[z] = '\0';

	len = z - 1;
	for (x = 0 ; x < z / 2; x++)
	{
		temp = r[x];
		r[x] = r[len];
		r[len--] = temp;
	}

	return (r);
}
