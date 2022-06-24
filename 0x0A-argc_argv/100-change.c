#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of pointers to string arguement
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n;
	int m = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);

	while (n > 0)
	{
		if (n >= 25)
		{
			n = n - 25;
		}
		else if (n >= 10)
		{
			n = n - 10;
		}
		else if (n >= 5)
		{
			n = n - 5;
		}
		else if (n >= 2)
		{
			n = n - 2;
		}
		else if (n >= 1)
		{
			n = n - 1;
		}
		m++;
	}
	printf("%d\n", m);
	return (0);
}
