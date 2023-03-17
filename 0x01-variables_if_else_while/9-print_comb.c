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
for (i = 0; i < 10; i++)
{
if (i == 9)
putchar(i + '0');
else
{
putchar(i + '0');
putchar(',');
putchar(' ');
}
}
return (0);
}
