#include "main.h"
#include <stdio.h>
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
printf("%d", a[i]);

if (i != (n - 1))
{
putchar(',');
putchar(' ');
}

i++;
}

putchar('\n');
}
