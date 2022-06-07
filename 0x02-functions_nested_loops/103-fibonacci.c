#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms.
 * Return: 0
 */

int main(void)
{
	int n = 1, m, p, a;

	for (m = 2; m < 4000000; m += n)
	{
		if (m % 2 == 0)
		{
			p += m;
		}
		a = m;
		n = a;
	}
	printf("%d\n", p);

	return (0);
}
