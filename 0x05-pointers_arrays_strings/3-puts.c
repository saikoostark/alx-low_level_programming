#include <unistd.h>
#include "main.h"

/**
 * void _puts(char *str);
 - function
 * @str: param1
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void _puts(char *str)
{
	while (*(++str))
		_putchar(*str);

	_putchar('\n');
}
