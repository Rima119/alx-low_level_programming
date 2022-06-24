#include <stdio.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of pointers to string arguement
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void) argv;
	return (0);
}
