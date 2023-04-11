#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - check the code
 * @width : param
 * @height : param
 * Return: Always 0.
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i = 0;

	if (width < 1 || height < 1)
		return (NULL);

	ptr = malloc(sizeof(*ptr) * height);

	if (ptr == NULL)
		return (ptr);
	for (i = 0; i < height; i++)
	{
		ptr[i] = calloc(width, sizeof(int));
		if (ptr[i] == NULL)
			return (ptr[i]);
	}

	return ptr;
}
