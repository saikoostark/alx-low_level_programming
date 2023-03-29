#include <stdio.h>
#include "main.h"

/**
 * _strcat - function
 * @dest : param1
 * @src : param 2
 * Return : pointer
 */

char *_strcat(char *dest, char *src)
{
	int size, i;

	size = 0, i = 0;

	while (*(dest + size))
		size++;

	while (*(src + i))
		dest[size++] = src[i++];

	dest[size] = '\0';

	return (dest);
}
