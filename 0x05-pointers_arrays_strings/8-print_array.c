#include "main.h"

/**
 * print_array - prints n elements of an array
 * @a: the array
 * @n: number of elements in the array
 * Return: Nothing
 */

void print_array(int *a, int n)
{
int i = 0;

while (i < n)
{
_putchar(a[i]);

if (i != (n - 1))
{
_putchar(' ');
_putchar(',');
}

i++;
}

_putchar('\n');
}
