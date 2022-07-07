#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of parameters
 * Return: the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list m;
	int result = 0;
	unsigned int a;

	va_start(m, n);
	if (n == 0)
	{
		return (0);
	}
	else if (n != 0)
	{
		for (a = 0; a < n; a++)
		{
			result += va_arg(m, unsigned int);
		}
	}
	va_end(m);
	return (result);
}
