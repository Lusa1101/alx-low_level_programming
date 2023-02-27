#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: the string to be printed in reverse
 * Return: Nothing
 */

void print_rev(char *s)
{
int len;

len = _strlen(s) - 1;

while (len >= 0)
{
_putchar(s[len]);
len--;
}
_putchar('\n');
}
