#include <stdio.h>
/**
 * main - A program that print A-Z
 * Return: 0 to be success
 */
int main(void)
{
char f;
for (f = 'a'; f <= 'z'; f++)
{
putchar(f);
}
for (f = 'A'; f <= 'Z'; f++)
{
putchar(f);
}
putchar('\n');
return (0);
}
