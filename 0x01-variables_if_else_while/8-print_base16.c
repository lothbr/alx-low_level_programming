#include <stdio.h>
/**
 * main - A program that prints all number
 * of base 16
 * Return: 0 to be success
 */
int main(void)
{
int num;
char aph;
for (num = 0; num <= 9; num++)
{
putchar('0' + num);
}
for (aph = 'a'; aph <= 'f'; aph++)
{
putchar(aph);
}
putchar('\n');
return (0);
}
