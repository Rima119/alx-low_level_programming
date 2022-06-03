#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all possible different combinations of three digits.
 * Return: 0
 */

int main(void)
{
	int n, m, x;


	for (n = 0; n <= 9; n++)
	{
		for (m = n + 1; m <= 9; m++)
		{
			for (x = m + 1; x <= 9; x++)
			{
				putchar(n + '0');
				putchar(m + '0');
				putchar(x + '0');

				if (n < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
