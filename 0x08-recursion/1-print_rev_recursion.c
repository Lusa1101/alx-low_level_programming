#include "main.h"
#include <unistd.h>

/**
 * _print_rev_recursion - prints a string in reverse
 * @str: the string to be printed in reverse
 * Return: prints the string
 */

void _print_rev_recursion(char *str)
{
int len = _strlen(str);
len --;

if (str[len] < 0)
{
_putchar('\n');
return;
}

_putchar(str[len]);

_print_rev_recursion(str - 1);
}
