#include <stdio.h>
/**
 * main - A  program that print number in two's
 * and are unique
 * Return: 0 to be success
 */
int main(void)
{
int k;
int i;
int j;
for (i = 0; i < 8; i++)
{
for (j = i + 1; j < 9; j++)
{
for (k = j + 1; k <= 9; k++)
{
putchar('0' + i);
putchar('0' + j);
putchar('0' + k);
if (i != 7 || j != 8 || k != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
