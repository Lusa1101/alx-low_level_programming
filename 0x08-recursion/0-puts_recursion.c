#include "main.h"
#include <unistd.h>

/**
 * _puts_recursion - prints a string
 * _puts - prints a string of characters
 * @str: the string to be printed by _puts
 * @s: the string to be printed by _puts_recursion
 * Return: the string
 */

void _puts(char *str)
{
if (str[0] == '\0')
return;

write(1, &str[0], 1);
_puts(str + 1);

}

void _puts_recursion(char *s)
{
if (s[0] == '\0')
{
_puts("\n");
return;
}

_puts(s);
_puts("\n");
}
