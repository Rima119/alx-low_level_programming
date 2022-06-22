#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: number
 * Return: the factorial of a given number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (n);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
