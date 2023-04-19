#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - func
 *
 * @array: param
 * @size: param
 * @cmp: param
 * Return: retun nothing at all
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	size_t i;

	if (array && cmp && (size > 0))
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	retur n (-1);
}
