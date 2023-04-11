#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - check the code
 * @s1 : param
 * @s2 : param
 * Return: Always 0.
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i = 0;

	ptr = malloc(sizeof(*ptr) * height);

	for (i = 0; i < height; i++)
	{
		ptr[i] = calloc(width, sizeof(int));
	}

	return ptr;
}
