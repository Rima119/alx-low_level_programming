#include "main.h"

/**
 * prime - function that returns the root of a number
 * @n: number
 * @r: root
 * Return: the root of a number
 */

int prime(int n, int r)
{
	int m = r * r;

	if (n > 0 && n < m)
	{
		return (1);
	}
	else if (n == m)
	{
		return (0);
	}
	else if (n < 0 || r < 0)
	{
		return (0);
	}
	return (prime(n, i + 1));
}

/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: number
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	return (prime(n, 0));
}
