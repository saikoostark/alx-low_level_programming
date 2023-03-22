
#include "main.h"
/**
 * print_times_table - function here
 * Return: 0
 */


void print_times_table(int n)
{
int i, j, k;

if (n > 15 || n < 0)
return ;

for (i = 0 ; i <= n ; i++)
{
for (j = 0 ; j <= n ; j++)
{
k = i * j;
if (j == 0)
{
_putchar('0');
_putchar(',');
continue;
}
if (k > 99)
{
_putchar(' ');
_putchar('0' + k /100 % 10);
_putchar('0' + k /10 % 10);
_putchar('0' + k % 10);
}
else if (k > 9)
{
_putchar(' ');
_putchar(' ');
_putchar('0' + k /10 % 10);
_putchar('0' + k % 10);
}
else
{
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar('0' + k % 10);
}

if (j != n)
_putchar(',');

}
_putchar('\n');
}
}
