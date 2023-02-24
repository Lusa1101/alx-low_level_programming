#include "main.h"

/**
 * more_numbers - printnts number to 14 ten times
 *
 * Return: print the numbers
 */

void more_numbers(void)
{
int i = 0, j = 0;

while (j < 10)
{
i = 0;
while (i < 15)
{
_putchar(i);
i++;
}
_putchar('\n');
j++;
}
_putchar('\n');
}
