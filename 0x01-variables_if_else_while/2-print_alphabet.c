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
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
char alp[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i < 26; i++)
{
putchar(alp[i]);
}
putchar("\n");
return (0);
}
