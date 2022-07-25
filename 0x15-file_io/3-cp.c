#include "main.h"

/**
 * main - program that copies the content of a file to another file.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n, m, p, d;
	char s[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	n = open(argv[1], O_RDONLY);
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	m = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (m == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while (p != 0)
	{
		p = read(n, s, 1024);
		if (p == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		d = write(m, s, p);
		if (d == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]), exit(99);
	}
	p = close(n);
	if (p == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", n), exit(100);
	d = close(m);
	if (d == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", m), exit(100);
	return (0);
}
