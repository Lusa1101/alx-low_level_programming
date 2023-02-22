#include "main.h"

/**
 * print_alphabet_x10 - print the alphabets 10 times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
char i = 'a';
int count = 0;

 for (count = 0; count < 10; count++)
{
while (i <= 'z')
{
_putchar(i);
i++;
}
_putchar('\n');
}
}
