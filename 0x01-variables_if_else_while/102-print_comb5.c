#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all possible combinations of two two-digit numbers.
 * Return: 0
 */

int main(void)
{
	int n, m, x, z;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			for (x = n; x <= '9'; x++)
			{
				for (z = m + 1; z <= '9'; z++)
				{
					putchar(n);
					putchar(m);
					putchar(' ');
					putchar(x);
					putchar(z);

					if (!((n == 9 && m == 8) && (x == 9 && z == 9)))
					{
						putchar(',');
						putchar(' ');
					}
				}
				z = 0;
			}
		}
	}
	putchar('\n');

	return (0);
}
