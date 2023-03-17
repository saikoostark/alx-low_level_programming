#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int i = 0 ; i < 8 ; i++)
	{
		for (int j = i + 1 ; j < 9 ; j++)
		{
			for (int k = j + 1 ; k < 10 ; k++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				if (i == 7 && j == 8 && k == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

