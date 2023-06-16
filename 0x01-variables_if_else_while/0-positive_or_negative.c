#include <stdlib.h>
#include <time.h>
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
if (n > 0)
{
printf("is postive %d \n", n);
}
if (n == 0)
{
printf("is zero %d \n", n);
}
if (n < 0)
{
printf("is negative %d \n", n);
}
return (0);
}
