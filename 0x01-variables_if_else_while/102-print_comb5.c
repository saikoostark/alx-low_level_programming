#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int i = 0 ; i < 10 ; i++)
	{
		for (int j = 0 ; j < 10 ; j++)
		{
			for (int k = i ; k < 10 ; k++)
			{
				for (int l = j + 1 ; l < 10 ; l++)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + k);
					putchar('0' + l);

					if(i == 9 && j == 8 && k == 9 && l == 9)
						continue;

					putchar(' ');
					putchar(',');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

