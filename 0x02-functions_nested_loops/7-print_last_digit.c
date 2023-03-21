#include "main.h"
/**
 * print_last_digit - function here
 * @n: parameter of function
 * Return: 1 if it is lower
 * and return 0 else
 */


int print_last_digit(int n)
{
	if (n < 0)
		n = -n;

	_putchar('0' + (n % 10));
	return (n % 10);
}
