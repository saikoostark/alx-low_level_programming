#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = i+1; j < 100; j++) {

			putchar('0' + (i/10 % 10));
			putchar('0' + (i % 10));
			putchar(' ');
			putchar('0' + (j/10 % 10));
			putchar('0' + (j % 10));
			
			if(i == 98 && j == 99)
				continue;

			putchar(' ');
			putchar(',');
				
		}
	}
	
	putchar('\n');

	return (0);
}

// int main(void)
// {
// 	int i, j, k, l;
//
// 	for (i = 0 ; i < 10 ; i++)
// 	{
// 		for (j = 0 ; j < 10 ; j++)
// 		{
// 			for (k = i ; k < 10 ; k++)
// 			{
// 				for (l = j + 1 ; l < 10 ; l++)
// 				{
// 					putchar('0' + i);
// 					putchar('0' + j);
// 					putchar(' ');
// 					putchar('0' + k);
// 					putchar('0' + l);
//
// 					if (i == 9 && j == 8 && k == 9 && l == 9)
// 						continue;
//
// 					putchar(' ');
// 					putchar(',');
// 				}
// 			}
// 		}
// 	}
// 	putchar('\n');
// 	return (0);
// }
//




