#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: the checked character
 * Return: 1 if c uppercase
 * returns 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
