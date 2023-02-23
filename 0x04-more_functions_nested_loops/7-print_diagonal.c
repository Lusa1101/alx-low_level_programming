#include "main.h"

/**
 * print_diagonal - prints character \ in diags
 * @n: the number of times the \ will be printed
 * Return: character \
 */
void print_diagonal(int n)
{
int i = 0;

while (n > 0)
{
while (i < n)
{
_putchar(' ');
i++;
}

_putchar('\\');

n--;
}
_putchar('\n');
}
