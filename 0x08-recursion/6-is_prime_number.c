#include <stdio.h>
/**
 * prime_helper - checks recursively the input from is_prime_number
 * @n: 1st param
 * @base: 2nd param
 * Return: 1 if n is a prime, else return 0 otherwise.
 */
int prime_helper(int n, int base)
{
	if (base % n == 0 || base < 2)
		return (0);
	else if (n == base - 1)
		return (1);
	else if (base > n)
		return (prime_helper(n + 1, base));
	return (1);
}
/**
 * is_prime_number - checks if the number is a prime number
 * @n: 1st param
 * Return: 1 if n is a prime, else return 0 otherwise.
 */
int is_prime_number(int n)
{
	return (prime_helper(2, n));
}
