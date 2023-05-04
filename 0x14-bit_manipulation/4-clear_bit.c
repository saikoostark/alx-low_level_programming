#include "main.h"

/**
 * clear_bit - function
 * @n: param
 * @index: param
 * Return: return 0 on success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a = 1;

	if (index > sizeof(*n) * 8)
		return (-1);
	a = a << index;

	*n = (*n) | ~a;

	return (1);
}
