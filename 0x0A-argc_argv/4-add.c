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
	int n, m;
	int p = 0;

	for (n = 1; n < argc; n++)
	{
		for (m = 0; argv[n][m] != '\0'; m++)
		{
			if (argv[n][m] < '0' || argv[n][m] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		p = p + atoi(argv[n]);
	}
	printf("%d\n", p);
	return (0);
}
