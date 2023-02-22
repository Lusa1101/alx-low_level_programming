#include "main.h"

/**
 * print_last_digit - will print the last digit of any number given
 *
 * Return: Always returns the solution
 */
int print_last_digit(int c)
{
_putchar(c % 10 + c);
return (c % 10);
}
