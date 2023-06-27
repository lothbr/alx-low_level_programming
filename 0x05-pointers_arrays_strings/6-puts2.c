#include "main.h"

/**
 * puts2 - a program that print every other number
 * @str: input string
 * Return: nothing
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		str++;
		str++;
		_putchar(*str);
	}
	_putchar('\n');
}
