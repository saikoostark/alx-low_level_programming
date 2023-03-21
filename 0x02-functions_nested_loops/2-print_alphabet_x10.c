#include "main.h"
/**
 * print_alphabet -  prints form a-z
 * Return: alwayes 0
 */


print_alphabet_x10()
{
	int i;
	int j;

	for (j = 0 ; j < 10 ; j++)
	{
		for (i = 0 ; i < 26 ; i++)
		{
			_putchar('a' + i);
		}
		_putchar('\n');

	}
}
