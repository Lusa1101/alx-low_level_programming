#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: the string to be printed
 * Return: the string
 */

void _puts_recursion(char *s)
{
if (s[0] == '\0')
return;

_puts(s[0]);

_puts_recursion(s + 1);
}

