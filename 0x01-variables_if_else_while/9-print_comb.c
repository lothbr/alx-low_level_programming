#include <stdio.h>
/**
 * main - Program that prints all single digits
 * with a comma
 * Return: 0 to be success
 */
int main(void)
{
int  num;
for (num = 0; num < 10; num++)
{
putchar('0' + num);
putchar(',', ' ');
}
putchar('\n');
return (0);
}
