#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s;
	unsigned int m;
	va_list a;

	va_start(a, m);
	for (m = 0; m < n; m++)
	{
		s = va_arg(a, char*);
		if (s != 0)
		{
			printf("%s", s);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && m != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(a);
}
