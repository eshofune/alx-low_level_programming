#include "main.h"

/**
* flip_bits - returns the number of bits you would
* need to flip to get from one number to another
* @n: first number
* @m: second number
* Return: number of bits to change (flip)
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int num;
int count = 0;
unsigned long int curr_num;
unsigned long int sep = n ^ m;
for (num = 63; num >= 0; num--)
{
curr_num = sep >> num;
if (curr_num & 1)
count++;
}
return (count);
}
