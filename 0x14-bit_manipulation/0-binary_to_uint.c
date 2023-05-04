#include "main.h"

/**
* binary_to_uint - converts a binary number to an unsigned int number
* @b: string where binary number is contained
* Return: The resulting number
*/
unsigned int binary_to_uint(const char *b)
{
int num;
unsigned int dec_num = 0;
if (!b)
return (0);
for (num = 0; b[num]; num++)
{
if (b[num] < '0' || b[num] > '1')
return (0);
dec_num = 2 * dec_num + (b[num] - '0');
}
return (dec_num);
}
