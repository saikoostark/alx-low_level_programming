#include <stdio.h>

void fun(void) __attribute__((constructor));

/**
 * fun - function
 * Return: nothing
 */
void fun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
