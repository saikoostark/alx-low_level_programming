#include <stdio.h>
/**
 * check - helper function
 * @n: 1st param
 * @base: 2nd param
 * Return: natural square root of number base
 */
int check(int n, int base)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (-1);
	return (check(n + 1, base));
}

/**
 * _sqrt_recursion - return the natural square root of a number n.
 * @n: 1st param
 * Return: the natural square root of number n
 */
int _sqrt_recursion(int n)
{
	return (check(1, n));
}
