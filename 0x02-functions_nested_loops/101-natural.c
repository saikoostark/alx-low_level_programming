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
for (int i = 3 ; i < 1024 ; i += 3)
sum += i;

for (int i = 5 ; i < 1024 ; i += 5)
sum += i;

printf("%d\n", sum);
return (0);
}
