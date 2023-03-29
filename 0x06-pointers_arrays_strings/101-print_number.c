#include <stdio.h>
#include "main.h"

/**
 * print_number - function
 * @n : param1
 *Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_number(int n)
{

	int i = 1;
	unsigned int m = 0, x = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	m = n;

	while (m)
	{
		i *= 10;
		m /= 10;
	}

	i /= 10;

	while (i)
	{
		x += ((n % 10) * i);
		n /= 10;
		i /= 10;
	}

	while (x)
	{
		_putchar('0' + x % 10);
		x /= 10;
	}
}
