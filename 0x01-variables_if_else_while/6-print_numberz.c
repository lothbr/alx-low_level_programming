#include <stdio.h>
/**
 * main - A program that prints all single digits
 * Return: 0 to be success
 */
int main(void)
{
int a;
for (a = 0; a < 10; a++)
{
putchar('0' + a);
}
putchar('\n');
return (0);
}
