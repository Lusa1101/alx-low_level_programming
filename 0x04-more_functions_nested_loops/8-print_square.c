#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 * Return: the size
 */
void print_square(int size)
{
int n = 0;

while (size > 0)
{
n = 0;
while (n < size)
{
_putchar('#');
n++;
}
_putchar('\n');
size--;
}
_putchar('\n');
}
