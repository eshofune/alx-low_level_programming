#include "main.h"

/**
* print_square - prints a diagonal line
*
* @size: is the size of the square
* Return: Always 0 (Successful)
*/

void print_square(int size)
{
int row, column;
for (row = 1; row <= size; row++)
{
for (column = 1; column <= size; column++)
_putchar('#');
_putchar('\n');
}
}
