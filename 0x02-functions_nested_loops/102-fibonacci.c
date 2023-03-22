#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
int i, n1, sum, tem;

n1 = 1, sum = 0;

for (i = 1 ; i < 50 ; i++){
printf("%d", sum + n1);
tem = n1;
n1 = sum + n1;
sum = tem;
if(i != 50)
putchar(',');
}
return (0);
}
