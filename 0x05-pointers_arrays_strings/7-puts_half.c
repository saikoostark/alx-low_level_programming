#include "main.h"

/**
 * puts_half - function
 * @str: param1
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void puts_half(char *str)
{

	int len, i;

	len = 0;
	while (*(str + len))
		len++;

	for (i = len / 2; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
