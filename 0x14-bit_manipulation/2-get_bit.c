#include "main.h"

/**
 * get_bit - function
 * @n: param
 * @index: param
 * Return: return 0 on success
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	n = n >> index;

	return (n & 1);
}
