#include "main.h"

/**
* clear_bit - sets the value of a bit to 0 at a given index
* @n: pointer the number to be changed
* @index: index of the bit to be set to 1
* Return: 1 if it worked, or -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = (~(1UL << index) & *n);
return (1);
}
