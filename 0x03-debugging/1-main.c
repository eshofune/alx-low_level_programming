#include <stdio.h>

/**
* main - causes an infinite loop
* printf: function used to avoid an infinite loop
* \\o/\n: the output
* Return: 0
*/

int main(void)
{
int i;

printf("Infinite loop incoming :(\n");

i = 0;
/**
* while (i < 10) - condition
* {
* putchar(i);
* }
*/
printf("Infinite loop avoided! \\o/\n");

return (0);
}
