#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
unsigned long i, n1, sum, tem;

n1 = 1, sum = 0;

for (i = 1 ; i < 99 ; i++)
{
printf("%lu", sum + n1);
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
