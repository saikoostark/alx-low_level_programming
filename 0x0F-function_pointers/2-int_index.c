#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - func
 *
 * @array: param
 * @size: param
 * @action: cmp
 * Return: retun nothing at all
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	size_t i;

	if (array && cmp && size > -1)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
