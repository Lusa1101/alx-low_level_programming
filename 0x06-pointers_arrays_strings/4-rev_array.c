#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: the array
 * @n: number of elements of the array
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
int i = n;

while (i >= 0)
{
_putchar(a[i] / 10 + '0');

if (i != 0)
{
_putchar(',');
_putchar(' ');
}

i--;
}
}
