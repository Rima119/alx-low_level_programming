#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms.
 * Return: 0
 */

int main(void)
{
	int n = 1, m = 2, p = 0, a;

	while (m < 4000000)
	{
		if (m % 2 == 0)
		{
			p = p + m;
		}
		a = m;
		m = m + n;
		n = a;
	}
	printf("%d\n", p);

	return (0);
}
