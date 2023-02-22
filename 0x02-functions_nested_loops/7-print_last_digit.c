#include "main.h"

/**
 * print_last_digit - will print the last digit of any number given
 *
 * Return: Always returns the solution
 */
int print_last_digit(int c)
{
int i = c % 10;
_putchar(i + '0');
return (i);
}

