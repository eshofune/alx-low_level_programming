#include <stdio.h>
/**
* main - Prints the first 50 fibonacci numbers
* Return: Nothing
*/
int main(void)
{
int i = 0;
long int a = 0, b = 1, next;
while (i < 50)
{
next = a + b;
a = b;
printf("%lu", next);
if (i < 49)
{
printf(", ");
}
i++;
}
putchar('\n');
return (0);
}
