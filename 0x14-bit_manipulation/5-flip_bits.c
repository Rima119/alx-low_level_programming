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
	unsigned long int p, a = 0, b;

	b = n ^ m;
	for (p = 0; b != 0; p++)
	{
		if (b & 1)
		{
			a++;
		}
		b = b >> 1;
	}
	return (a);
}
