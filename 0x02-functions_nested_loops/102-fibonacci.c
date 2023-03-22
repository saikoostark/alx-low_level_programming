#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
long int i, n1, sum, tem;

n1 = 1, sum = 0;

for (i = 1 ; i < 51 ; i++)
{
printf("%ld", sum + n1);
tem = n1;
n1 = sum + n1;
sum = tem;
if (i != 50)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
