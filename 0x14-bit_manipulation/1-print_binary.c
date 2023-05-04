#include "main.h"

/**
* print_binary - prints the binary representation of a number
* @n: Number to be printed in binary
*/
void print_binary(unsigned long int n)
{
int num;
int count = 0;
unsigned long int curr_num;
for (num = 63; num >= 0; num--)
{
curr_num = n >> num;
if (curr_num & 1)
{
_putchar('1');
count++;
}
else if (count)
_putchar('0');
}
if (!count)
_putchar('0');
}
