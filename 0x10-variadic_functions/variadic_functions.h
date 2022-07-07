#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);

/**
 * struct pristr - struct op
 * @m: operator
 * @pr: the function
 */

typedef struct pristr
{
	char *m;
	void (*pr)(va_list v);
} pristr_t;

void pr_char(va_list v);
void pr_integer(va_list v);
void pr_float(va_list v);
void pr_string(va_list v);

#endif
