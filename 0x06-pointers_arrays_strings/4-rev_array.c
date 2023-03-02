#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: the array
 * @n: number of elements of the array
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
n -= 1;

while (n >= 0)
{
_putchar(a[n]);

if (n != 0)
{
_putchar(',');
_putchar(' ');
}

n--;
}

}
