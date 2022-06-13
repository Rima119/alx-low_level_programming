#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: int pointer type
 * &b: int pointer type
 */

void swap_int(int *a, int *b)
{
	*b = *a;

	*a = *b;
}
