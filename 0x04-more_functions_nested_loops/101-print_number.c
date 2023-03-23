#include "main.h"
#include <stdio.h>
/**
 * print_number - function here
 * @n: param
 * Return: 1 if it is lower
 * and return 0 else
 */

void print_number(int n)
{
int divisor = 1;

if (n < 0)
{
n = -n;
_putchar('-');
}

while (n / divisor >= 10)
divisor *= 10;

while (divisor != 0)
{
int digit = (n / divisor) % 10;
char digit_char = digit + '0';
_putchar(digit_char);
divisor /= 10;
}
}
