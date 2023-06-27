#include "main.h"
/**
 * _strlen - a program that return the len of a string
 * @s: input string
 * Return: the length of the string
 */
int _strlen(char *s)
{
int n = 0;
while (*s != '\0') {
n++;
s++;
}
return (n);
}
