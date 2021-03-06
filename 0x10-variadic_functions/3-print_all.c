#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pr_char - function that prints a character
 * @v: the character
 */
void pr_char(va_list v)
{
	printf("%c", va_arg(v, int));
}

/**
 * pr_integer - function that prints an integer
 * @v: the integer
 */

void pr_integer(va_list v)
{
	printf("%d", va_arg(v, int));
}

/**
 * pr_float - function that prints a float
 * @v: the float number
 */

void pr_float(va_list v)
{
	printf("%f", va_arg(v, double));
}

/**
 * pr_string - function that prints a string
 * @v: the string
 */

void pr_string(va_list v)
{
	char *a;
	
	a = va_arg(v, char *);
	if (a == NULL)
	{
		a = "(nil)";
	}
	printf("%s", a);
}

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	char *r = "";
	int n = 0, s = 0;
	va_list a;

	pristr_t prt[] = {
		{"c", pr_char},
		{"i", pr_integer},
		{"f", pr_float},
		{"s", pr_string},
		{NULL, NULL}
	};

	va_start(a, format);
	while (format[n] != '\0' && format != NULL)
	{
		s = 0;
		while (s < 4)
		{
			if (format[n] == *(prt[s].m))
			{
				printf("%s", r);
				prt[s].pr(a);
				r = ", ";
			}
			s++;
		}
		n++;
	}
	printf("\n");
	va_end(a);
}
