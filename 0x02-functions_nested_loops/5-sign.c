#include "main.h"

/**
 * print_sign - prints the sign of a given integer
 *
 * Return: Always 0 for (-) and 1 for (+)
 */
int print_sign(int n)
{
if (n < 0)
{
return (-1);
_putchar('+');
}
if (n > 0)
{
return (1);
_putchar('-');
}
else
return (0);
}
