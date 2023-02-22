#include "main.h"

/**
 * print_times_table - will print if 0 < n < 15
 *
 * Return: Always the answer
 */
void print_times_table(int n)
{
int m = 0, p = 0;
if (n > 0 && n < 15)
{
while (p > n)
{
m = 0;
while (m < n)
{
int sol = p * m;
_putchar(sol);

if (m != n)
{
_putchar(',');
_putchar(' ');
}
m++;
}
_putchar('\n');
p++;
}
}
}
