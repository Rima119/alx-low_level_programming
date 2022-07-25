#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int n, m = 0, d;

	if (filename == NULL)
	{
		return (-1);
	}
	n = open(filename, O_WRONLY | O_APPEND);
	if (n == -1)
	{
		return (-1);
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
