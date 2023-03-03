#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer
 * Return: Nothing
 */

void print_number(int n)
{

if (n >= 10 && n <= 99)
{
_putchar(n / 10 + '0');
_putchar(n % 10 + '0');
}

else if (n >= 100 && n <= 999)
{
_putchar(n / 100 + '0');
_putchar(n / 10 + '0');
_putchar(n % 10 + '0');
}

else if (n >= 1000 && n <= 9999)
{
_putchar(n / 1000 + '0');
_putchar(n / 100 + '0');
_putchar(n / 10 + '0');
_putchar(n % 10 + '0'); 
}

else
_putchar(n % 10 + '0');

}
