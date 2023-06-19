#include <stdio.h>
/**
 * main - A  program that print number in two's
 * and are unique
 * Return: 0 to be success
 */
int main(void)
{
int i;
int j;
for (i = 0; i < 100; i++)
{
for (j = i; j < 100; j++)
{
putchar('0' + i / 10);
putchar('0' + i % 10);
putchar(' ');
putchar('0' + j / 10);
putchar('0' + j % 10);
if (i != 99 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
