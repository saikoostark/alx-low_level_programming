#include "main.h"

/**
 * flip_bits - function
 * @n: param
 * @m: param
 * Return: return 0 on success
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int c = 0;

	while (1)
	{
		if ((n & 1) != (m & 1))
			c++;
		n >>= 1;
		m >>= 1;

		if (n == 0 && m == 0)
			break;
	}

	return (c);
}
