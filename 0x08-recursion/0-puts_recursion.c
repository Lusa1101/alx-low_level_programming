#include "main.h"
#include <unistd.h>

/**
 * _puts_recursion - prints a string from the main
 * _puts - prints a string
 * @str: the string to be printed in _puts
 * @s: the string to be printed by _puts_recursion
 * Return: the string
 */

void _puts_recursion(char *s)
{
if (s* == '\0')
{
_putchar('\n');
return;
}

_putchar(*s);
_puts_recursion(s + 1);
}
