#include <stdio.h>
/**
 * main - A program that prints all the sie of data types
 * Return: 0 success
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;
printf("Size of a char: %d byte(s)\n", sizeof(a));
printf("Size of an int: %d  byte(s)\n", sizeof(b));
printf("Size of a long int: %d byte(s)\n", sizeof(c));
printf("Size of a long long int: %d byte(s)\n", sizeof(d));
printf("Size of a float: %d byte(s)", sizeof(e));
return (0);
}
