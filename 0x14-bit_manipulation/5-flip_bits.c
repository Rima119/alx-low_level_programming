#include "main.h"
#include <stdio.h>

/**
 * flip_bits - function that returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: number
 * @m: number
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int p, a = 0;

	for (p = 0; (n ^ m) != 0; p++)
	{
		if ((n ^ m) & 1)
		{
			a++;
		}
		(n ^ m) = (n ^ m) >> 1;
	}
	return (a);
}
