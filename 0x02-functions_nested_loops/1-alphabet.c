#include "main.h"
/**
 * print_alphabet -  prints form a-z
 * Return: alwayes 0
 */


void print_alphabet(void)
{
	int i;

	for (i = 0 ; i < 25 ; i++)
	{
		_putchar('a' + i);
	}
	_putchar('\n');

}
