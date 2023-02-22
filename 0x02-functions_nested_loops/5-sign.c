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
_putchar('-');
return (-1);
}
if (n > 0)
{
_putchar('+');
return (1);
}
else
{
_putchar(n % 10 + '0');
return (0);
}
}
