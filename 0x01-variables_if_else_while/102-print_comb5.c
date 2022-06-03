#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all possible combinations of two two-digit numbers.
 * Return: 0
 */

int main(void)
{
	int n, m;

	for (n = 0; n < 100 ; n++)
	{
		for (m = n + 1; m < 100 ; m++)
		{
			putchar(n / 10 + '0');
			putchar(n % 10 + '0');
			putchar(' ');
			putchar(m / 10 + '0');
			putchar(m % 10 + '0');

			if (!((n == 98) && (m == 99)))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
