#include "main.h"
/**
 * print_alphabet -  prints form a-z
 * Return: alwayes 0
 */


void print_alphabet(void)
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
