#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
int i, sum;

sum = 0;
for (i = 3 ; i < 1024 ; i += 3)
sum += i;

for (i = 5 ; i < 1024 ; i += 5)
{
if (i % 3 != 0)
sum += i;
}
printf("%d\n", sum);
return (0);
}
