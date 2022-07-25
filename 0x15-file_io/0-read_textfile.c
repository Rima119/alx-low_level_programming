#include "main.h"

/**
 * read_textfile - function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: the file
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int n;
	char *m;
	ssize_t rct, wct;

	if (filename == NULL)
	{
		return (0);
	}
	n = open(filename, O_RDONLY);
	if (n == -1)
	{
		return (0);
	}
	m = malloc(sizeof(char) * letters);
	if (m == NULL)
	{
		return (0);
	}
	rct = read(n, m, letters);
	wct = write(STDOUT_FILENO, m, rct);

	close(n);
	free(m);
	return (wct);
}
