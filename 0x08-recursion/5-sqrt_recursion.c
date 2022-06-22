#include "main.h"

/**
 * _recursion - function that returns the root of a number
 * @n: number
 * @r: root
 * Return: the root of a number
 */

int _recursion(int n, int r)
{
	int m = r * r;

	if (n < m)
	{
		return (-1);
	}
	else if (n == m)
	{
		return (r);
	}
	return (numb(n, r + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number
 * Return: the natural square root of a number
 */

int _sqrt_recursion(int n)
{
	return (_recursion(n, 0));
}
