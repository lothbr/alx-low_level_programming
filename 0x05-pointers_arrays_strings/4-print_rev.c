#include "main.h"
/**
 * print_rev - a program that prints strings in reverse
 * @s: accept the inputs
 * Return: nothing
 */

void print_rev(char *s)
{
int count = 0;
int number;
while (*s != '\0')
{
count++;
s++;
}
s--;
for (number = count; number > 0; number--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
