#include <stdio.h>

/**
 * pr_m - function that prints a statement before the main function is executed
 */

void __attribute__((constructor)) pr_m(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
