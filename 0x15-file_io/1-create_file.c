#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int n, m = 0, d;

	if (filename == NULL)
	{
		return (0);
	}
	n = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (n == -1)
	{
		return (0);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	while (text_content[m])
	{
		m++;
	}
	d = write(n, text_content, m);
	if (d == -1)
	{
		return (-1);
	}
	close(n);
	return (1);
}
