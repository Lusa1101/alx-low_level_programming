#include "main.h"
#include <unistd.h>

/**
 * _print_rev_recursion - prints a string in reverse
 * @str: the string to be printed in reverse
 * Return: prints the string
 */

void _print_rev_recursion(char *str)
{
if (*str != '\0')
{
_print_rev_recursion(str + 1);
_putchar(*str);
}
}
