#include "main.h"

/**
 * print_binary - function
 * @n: param
 * Return: return 0 on success
 */

void print_binary(unsigned long int n)
{
	if (n != 0)
	{
		print_binary(n >> 1);
		putchar('0' + (n & 1));
	}
}
