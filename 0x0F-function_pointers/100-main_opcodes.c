#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints the opcodes of its own main function.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *m = (char *) main;
	int n = 0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (n < (atoi(argv[1])))
	{
		printf("%02x", m[n] & 0xFF);
		if (n != atoi(argv[1]) - 1)
		{
			printf(" ");
		}
		n++;
	}
	printf("\n");

	return (0);
}
