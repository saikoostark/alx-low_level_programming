#include <stdio.h>

/**
 * get_size - function
 * @s: 1st param
 * Return: 1 if n is a prime, else return 0 otherwise.
 */
int get_size(char *s)
{
	if (!*s)
		return (0);

	return (1 + get_size(s + 1));
}

/**
 * palindrome_helper - function
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
 * is_palindrome - function
 * @s: 1st param
 * Return: 1 if n is a prime, else return 0 otherwise.
 */
int is_palindrome(char *s)
{

	int n = get_size(s);

	return (palindrome_helper(s, 0, n - 1));
}
