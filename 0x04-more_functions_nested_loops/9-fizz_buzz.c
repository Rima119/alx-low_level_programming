#include <stdio.h>

/**
 * main - Entry point
 * Description: Fizz-Buzz test program
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (a % 5 == 0)
		{
			printf(" Buzz");
		}
		else if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else
		{
			printf(" %d", a);
		}
	}
	printf("\n");

	return (0);
}
