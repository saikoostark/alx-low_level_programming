#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - func
 *
 * @array: param
 * @size: param
 * @action: param
 * Return: retun nothing at all
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
