#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 * Return: the size
 */
void print_square(int size)
{
int i = 0, n = size;

while (size > 0)
{
i = 0;
while (i < n)
{
_putchar(35);
i++;
}
_putchar('\n');
size--;
}
_putchar('\n');
}
