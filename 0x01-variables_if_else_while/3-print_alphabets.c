#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the alphabet in lowercase, and then in uppercase.
 * Return: 0
 */

int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	for (n = 'A'; n <= 'Z'; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
	
