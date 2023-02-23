#include "main.h"

/**
 * print_most_numbers - does not print 2 and 4
 *
 * Return: Gives the digits except 2 and 4
 */
void print_most_numbers(void)
{
int i = 0;

while (i < 10)
{
if (i != 4 && i != 2)
_putchar(i % 10 + '0');

i++;
}

_putchar('\n');
}
