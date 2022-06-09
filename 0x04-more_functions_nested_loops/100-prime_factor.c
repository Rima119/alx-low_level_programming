#include <stdio.h>

/**
 * main - Entry point
 * Description: finds and prints the largest prime factor of number 61285247514
 * Return: 0
 */

int main(void)
{
	long x = 612852475143;
	long m;

	for (m = 2; m <= x; m++)
	{
		if (x % m == 0)
		{
			x = x / m;
			m--;
		}
	}
	printf("%lu\n", m);
}
