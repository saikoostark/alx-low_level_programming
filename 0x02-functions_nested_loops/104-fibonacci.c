#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
unsigned long long a = 0, b = 1, c, i;
for(i=0; i<99; i++)
{
c = a + b;
printf("%lu", c);
a = b;
b = c;
if (i != 98)
{
printf(", ");
}
}
putchar('\n');
return (0);
}
