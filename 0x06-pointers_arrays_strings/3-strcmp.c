#include <stdio.h>
#include "main.h"

/**
 * _strcmp - function
 * @s1 : param1
 * @s2 : param 2
 *Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _strcmp(char *s1, char *s2)
{
	int i, sum1, sum2;

	i = sum1 = sum2 = 0;

	while (*(s1 + i))
		sum1 += *(s1 + i++);

	i = 0;

	while (*(s2 + i))
		sum2 += *(s2 + i++);

	return (sum1 - sum2);
}
