#include "main.h"

/**
 * get_bit - function
 * @n: param
 * @index: param
 * Return: return 0 on success
 */
int get_bit(unsigned long int n, unsigned int index)
{

	while (index-- > 0)
	{
		/*
		if (n == 0)
			return (-1);
		*/
		n = n >> 1;
	}

	return (n & 1);
}
