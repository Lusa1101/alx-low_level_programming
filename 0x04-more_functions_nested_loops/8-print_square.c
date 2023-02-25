#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 * Return: the size
 */
void print_square(int size)
{
int i = 0, n = size;

if (size <= 0)
_putchar('\n');
 
else
{
while (n > 0)
{
i = 0;
while (i < size)
{
_putchar(35);
i++;
}
_putchar('\n');
n--;
}
}
}
