#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
long int i, n1, sum, tem, ev;

n1 = 1, sum = 0;

for (i = 1 ; i < 51 ; i++)
{
if ((sum + n1) % 2 == 0)
ev += sum + n1;
tem = n1;
n1 = sum + n1;
sum = tem;
}
printf("%ld\n", ev);
return (0);
}
