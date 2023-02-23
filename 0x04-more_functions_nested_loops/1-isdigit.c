#include "main.h"

/**
 * _isdigit - chackes if a number is a digit
 * @c: a parameter to take argument in the main
 * Return: if the number is a digit (1)
 */
int _isdigit(int c)
{
if ((9 - c) >= 0 && (9 - c) <= 9)
return (1);
if (c % 10 == 0)
return (1);
else
return (0);
}
