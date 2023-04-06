#include <stdio.h>
/**
 * palindrome_helper - checks recursively the input from is_prime_number
 * @s: 1st param
 * @start: 2nd param
 * @end: 3rd end
 * Return: 1 if n is a prime, else return 0 otherwise.
 */
int palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] == s[end])
		return (palindrome_helper(s, start + 1, end - 1));
	else
		return (0);
}
/**
 * is_palindrome - checks if the number is a prime number
 * @s: 1st param
 * Return: 1 if n is a prime, else return 0 otherwise.
 */
int is_palindrome(char *s)
{

	int n = 0;

	while (*(s + n))
		n++;

	return (palindrome_helper(s, 0, n - 1));
}
