#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - function main
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n, m;
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	p = get_op_func(argv[2]);
	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	n = atoi(argv[1]);
	m = atoi(argv[3]);
	printf("%d\n", p(n, m));

	return (0);
}
