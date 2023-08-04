#include "main.h"
/**
 * prime2 - makes possible to evaluate from 1 to n
 * @a: same as n
 * @b: number from 1 to n
 * Return: intger
 */
int prime2(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime2(a, b + 1));
}
/**
 * is_prime_number - check if num is prime
 * @n: th number to be checked
 * Return: on success 1.
 * on error, -1
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}
