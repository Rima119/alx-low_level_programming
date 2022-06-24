#include <stdio.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of pointers to string arguement
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n = 0;

	for (; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
