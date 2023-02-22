#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return - Always a multiple from the times table
 */
void times_table(void)
{
int a = 0, b = 0;

while (a < 9)
{
b = 0;
while (b < 9)
{
int sol = a * b;
_putchar(sol % 10 + '0');

if (b != 9)
_putchar(',');

b++;
}
_putchar('\n');

a++;
}
}
