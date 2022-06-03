#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all the numbers of base 16 in lowercase.
 * Return: 0
 */

int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
