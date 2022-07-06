#include "3-calc.h"

/**
 * op_add - function for addition
 * @a: first integer
 * @b: second integer
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function for substraction
 * @a: first integer
 * @b: second integer
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function for multiplication
 * @a: first integer
 * @b: second integer
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function for division
 * @a: first integer
 * @b: second integer
 * Return: the result of the division of a by b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		return (-1);
	}
	return (a / b);
}

/**
 * op_mod - function for modulus
 * @a: first integer
 * @b: second integer
 * Return: the remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		return (-1);
	}
	return (a % b);
}
