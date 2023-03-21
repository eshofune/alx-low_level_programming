#include "main.h"
/**
*main - main function
*void print_alphabet_x10 - function that prints 10x alphabet
* Return: always 0 (Successful)
*/
void print_alphabet(void);
{
int i;
char j;
for (i = 1; i <= 10; i++)
{
for (j = 'a'; j <= 'z'; j++)
_putchar(j);
_putchar('\n');
}
}
