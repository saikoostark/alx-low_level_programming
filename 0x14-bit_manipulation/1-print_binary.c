#include "main.h"

/**
 * helper - function
 * @n: param
 * Return: return 0 on success
 */
void helper(unsigned long int n)
{
	if (n != 0)
	{
		helper(n >> 1);
		_putchar('0' + (n & 1));
	}
}

/**
 * print_binary - function
 * @n: param
 * Return: return 0 on success
 */

void print_binary(unsigned long int n)
{

	if (n == 0)
		_putchar('0');
	else
		helper(n);
}
