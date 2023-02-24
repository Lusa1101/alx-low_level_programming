#include "main.h"

/**
 * print_square - prints a square
 * @s: size of the square
 * Return: the size
 */
void print_squares(int s)
{
int i = 0, n = s;
while (s > 0)
{
i = 0;
while (i < n)
{
putchar('#');
i++;
}
putchar('\n');
s--;
}
}
