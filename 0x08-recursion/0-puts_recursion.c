#include "main.h"
#include <unistd.h>

/**
 * _puts - prints a string of characters
 * _puts_recursion - prints a string
 * @str: the string to be printed by _puts
 * @s: the string to be printed by _puts_recursion
 * Return: the string
 */

void _puts(char *str)
{
if (str[0] == '\0')
return;

_putchar(str[0]);
_puts(str + 1);

}

void _puts_recursion(char *s)
{
if (s[0] == '\0')
return;

_puts(s);
_putchar('\n');
}
