#include "main.h"
#include <stdio.h>
/**
 * _puts - a program that prints a string
 * @str: input character
 * Return: void
 */

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
