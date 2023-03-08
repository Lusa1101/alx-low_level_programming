#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints a character
 * _puts - prints a string of characters
 * _puts_recursion - prints a string
 * @c: the character to be prints
 * @str: the string to be printed by _puts
 * @s: the string to be printed by _puts_recursion
 * Return: the string
 */

void _putchar(char c)
{
write(1, &c, 1);
}

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
