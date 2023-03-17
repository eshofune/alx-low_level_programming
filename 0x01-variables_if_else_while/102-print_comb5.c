#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
* main - Entry point
* Return: Always 0 (Successful)
*/
int main(void)
{
int i = 0;
int j;
int k;
int a;
int b;
int c;
while (i <= 98)
{
j = (i / 10 + '0');
k = (i % 10 + '0');
a = 0;
while (a <= 99)
{
b = (a / 10 + '0');
c = (a % 10 + '0');
if (i < a)
{
putchar(j);
putchar(k);
putchar(' ');
putchar(b);
putchar(c);
if (i != 98)
{
putchar(',');
putchar(' ');
}
}
a++;
}
i++;
return (0);
}
}
