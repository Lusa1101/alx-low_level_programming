#include "main.h"

/**
 * print_diagonal - prints character \ in diags
 * @n: the number of times the \ will be printed
 * Return: character \
 */
void print_diagonal(int n)
{
while (n > 0)
{
_putchar(' ');
n--;
}

if (!(n <= 0))
_putchar('\\');

_putchar('\n');
}
