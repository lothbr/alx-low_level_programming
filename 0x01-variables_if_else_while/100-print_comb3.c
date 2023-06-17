#include <stdio.h>
/**
 * main - A  program that print number in two's
 * and are unique
 * Return: 0 to be success
 */
int main(void)
{
int rows = 1;
int col = 89;
int num[rows][col];
int i;
int j;
int value[rows][col];
for (i = 0; i < rows; i++)
{
for (j = 0; j <= col; j++)
{
num[i][j] = value[i][j];
if ((num[i][j] == value[j][i]) && (num[j][i] == value[i][j]))
{
continue;
}
putchar('0' + num[i][j]);
if  (num[i][j] != value[i][col])
{
putchar(',');
putchar(' ');
}
else
break;
}
}
return (0);
}
