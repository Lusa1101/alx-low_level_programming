#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 * Return: the size
 */
void print_square(int size)
{
int n = size;
  
while (size > 0)
{
while (n > 0)
{
_putchar('#');
n--;
}
_putchar('\n');
size--;
}
_putchar('\n');
}
