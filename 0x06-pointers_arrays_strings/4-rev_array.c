#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: the array
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
int i = 0;

n--;

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
