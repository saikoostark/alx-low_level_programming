#include "main.h"

/**
 * binary_to_uint - function
 * @b: param
 * Return: return 0 on success
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int x = 0;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
			x = x << 1;
		else if (b[i] == '1')
			x = (x << 1) | 1;
		else
			return (0);
	}

	return (x);
}
