#include "main.h"

/**
 * swap_int - a program two swap the contents of two numbers
 * @a: input
 * @b: input
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
int placeholder;
placeholder = *a;
*a = *b;
*b = placeholder;
}
