#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: A triangle
 */
void print_triangle(int size)
{
int n = 0, p = size, int i = size;

while (p > 0)
{
n = 1;
size--;
while (n <= i)
{
if (n < size)
_putchar(' ');

else
_putchar(35);

n++;
}
_putchar('\n');

p--;
}
}
