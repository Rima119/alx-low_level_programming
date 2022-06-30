#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated with a call to malloc
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * Return: a pointer to the allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *m, *s;
	unsigned int n;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		m = malloc(new_size);
		if (m == NULL)
		{
			return (NULL);
		}
		return (m);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	m = malloc(new_size);
	if (m == NULL)
	{
		return (NULL);
	}
	s = ptr;
	for (n = 0; n < old_size; n++)
	{
		m[n] = s[n];
	}
	free(ptr);
	return (m);
}
