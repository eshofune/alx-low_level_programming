#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
* main - Entry point
* Return: Always 0 (Successful)
*/
int main(void)
{
int i;
int j;
int k;
for (i = 0; i < 10; i++)
{
for (j = 1; j < 10; j++)
{
for (k = 2; k < 10; k++)
{
if (i < j && j < k)
{
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');
if (i + j + k != 24)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
