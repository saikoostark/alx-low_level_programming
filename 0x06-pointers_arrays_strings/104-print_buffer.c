#include <stdio.h>

#include "main.h"

/**
 * print_buffer - function
 * @b : param1
 * @size : param2
 *Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

#include <stdio.h>

void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = i; j < i + 10; j += 2)
		{
			if (j < size)
			{
				printf("%02x", (unsigned char)b[j]);
			}
			else
			{
				printf("  ");
			}

			if (j + 1 < size)
			{
				printf("%02x ", (unsigned char)b[j + 1]);
			}
			else if (j < size)
			{
				printf("%02x ", (unsigned char)b[j]);
			}
			else
			{
				printf("   ");
			}
		}

		printf(" ");

		for (j = i; j < i + 10 && j < size; j++)
		{
			if (b[j] >= 32 && b[j] <= 126)
			{
				printf("%c", b[j]);
			}
			else
			{
				printf(".");
			}
		}

		printf("\n");
	}
}
