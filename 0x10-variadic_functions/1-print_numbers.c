#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int m;
	va_list a;

	va_start(a, n);
	for (m = 0; m < n; m++)
	{
		printf("%d", va_arg(a, int));
		if (separator != NULL && m != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(a);
}
