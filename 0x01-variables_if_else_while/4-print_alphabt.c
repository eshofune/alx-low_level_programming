#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
* main - Entry point
* Return: Always 0 (Successful)
*/
int main(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
if (i != 'q' && i != 'e')
putchar(i);
putchar('\n');
return (0);
}
