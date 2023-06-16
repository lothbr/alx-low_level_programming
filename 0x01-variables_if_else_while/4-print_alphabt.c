#include <stdio.h>
/**
 * main - A program to print alphabet
 * A-z apart from q and e
 * Return: 0 as success
 */
int main(void)
{
char f = 'a';
do {
putchar(f);
f++;
} while (((f != 'q') && (f != 'e')) && (f <= 'z'));
putchar('\n');
return (0);
}
