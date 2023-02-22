#include "main.h"

/**
 * print_alphabet_x10 - print the alphabets 10 times
 *
 * Return: Always 1
 */
void print_alphabets_x10(void)
{
int i = 65, count = 0;

while (count != 10)
{
while (i < 91)
{
_putchar(i);
i++;
}
_putchar('\n');
count += 1;
}
}
