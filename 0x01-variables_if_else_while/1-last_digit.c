#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - A program that show if a number
* is positive, zero or negative.
* Return: 0 success
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
{
printf("Last digit of %d is %d  and is greater than 5\n", n,(n%10));
}
if (n == 0)
{
printf("Last digit of %d is and is 0\n", n);
}
if (n < 6 && n != 0)
{
printf("Last digit of %d is and isess than 6 and not 0 \n", n);
}
return (0);
}