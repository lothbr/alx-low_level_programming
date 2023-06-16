#include <stdio.h>
/**
 * main - A program to print alphabet
 * A-z apart from q and e
 * Return: 0 as success
 */
int main(void)
{
char f;
for (f = 'a'; f <= 'z'; f++)
{
if (f != 'e' && f != 'q')
putchar(f);
}
putchar('\n');
return (0);
}
