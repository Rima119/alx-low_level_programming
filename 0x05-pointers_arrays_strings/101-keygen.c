#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 * Return: 0
 */

int main(void)
{
	int p, n, m;

	srand(time(NULL));
	for (m = 0, n = 2772; n > 122; m++)
	{
		p = (rand() % 125) + 1;
		printf("%c", p);
		n = n - p;
	}
	printf("%c", n);

	return (0);
}
