#include "main.h"
/**
* _isdigit - check if input is digit from 0 - 9
*
* @c: input for alphabet
*
* Return: 1 if it is a digit, 0 if not
*/

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
