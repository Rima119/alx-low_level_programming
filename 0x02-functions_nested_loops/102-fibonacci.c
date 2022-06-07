#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2.
 * Return: 0
 */

int main(void)
{
	int a;
	long int n = 1, m = 1, p;

	for (a = 1; a <= 49; ++a)
	{
		p = m + n;
		printf("%lu", p);
		n = m;
		m = p;

		if (a != 50)
		{
			printf(", ");
		}
	}
	putchar('\n');

	return (0);
}
