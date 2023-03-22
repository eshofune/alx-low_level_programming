#include "main.h"
/**
* _abs - checks for absolute value
*
* @x: parameter to be checked
* Return: always x
*/
int _abs(int x)
{
if (x < 0)
x = -(x);
else if (x >= 0)
x = x;
return (x);
}
