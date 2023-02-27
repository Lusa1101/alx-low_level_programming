#include "main.h"

/**
 * print_numbers - prints out digits
 *
 * Return: digits
 */
void print_numbers(void)
{
int i = 0;

while (i < 10)
{
_putchar(i % 10 + '0');
i++;
}
_putchar('\n');
}
