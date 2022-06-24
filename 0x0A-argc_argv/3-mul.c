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
	int n = 0;

	if (argc == 3)
	{
		n = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", n);
	}
	else if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
