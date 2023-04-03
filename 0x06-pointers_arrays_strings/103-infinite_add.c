#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * infinite_add - function
 * @n1 : param1
 * @n2 : param2
 * @r : param3
 * @size_r : param4
 *Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = size_r, s1 = 0, s2 = 0, a = 0, b = 0, c = 0;
	char temp;

	while (*(n1 + s1))
		s1++;

	while (*(n2 + s2))
		s2++;

	if ()


	while (s1 && s2)
	{
		if (size_r == 0)
			return NULL;

		s1--, s2--, size_r--;
		a = n1[s1] - '0';
		b = n2[s2] - '0';

		if (a + b + c < 10)
		{
			r[size_r] = (a + b + c) + '0';
			c = 0;
		}

		else
		{
			r[size_r] = (a + b + c) % 10 + '0';
			c = 1;
		}
	}

	while (s1)
	{
		if (size_r == 0)
			return NULL;

		s1--, size_r--;
		a = n1[s1] - '0';

		if (a + c < 10)
		{
			r[size_r] = (a + c) + '0';
			c = 0;
		}

		else
		{
			r[size_r] = (a + c) % 10 + '0';
			c = 1;
		}
	}

	while (s2)
	{
		if (size_r == 0)
			return NULL;

		s2--, size_r--;
		b = n2[s2] - '0';

		if (b + c < 10)
		{
			r[size_r] = (b + c) + '0';
			c = 0;
		}

		else
		{
			r[size_r] = (b + c) % 10 + '0';
			c = 1;
		}
	}

	while (j != size_r)
	{
		temp = r[i];
		r[i] = r[size_r];
		r[size_r] = temp;
		size_r++;
		i++;
	}

	return (r);
}
