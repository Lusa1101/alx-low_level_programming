#include "main.h"

/**
 * _isdigit - chackes if a number is a digit
 * @c: a parameter to take argument in the main
 * Return: if the number is a digit (1)
 */
int _isdigit(int c)
{
if (c >= 0 && ((9 - c) <= 9))
return (1);
else
return (0);
}
