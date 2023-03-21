#include "main.h"
/**
*main - main function
*print_alphabet- function that prints alphabets in lowercase
* _putchar- print the alphabet function
* Return: always 0 (Successful)
*/
void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
_putchar(i);
_putchar('\n');
}
