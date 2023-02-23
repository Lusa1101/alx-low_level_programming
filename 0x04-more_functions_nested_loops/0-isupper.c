#include "main.h"

/**
 * _isupper - prints 0 or 1 depengs on the case
 * @c: take argument of the current character
 * Return: 1 for upper case and 0 otherwise
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
