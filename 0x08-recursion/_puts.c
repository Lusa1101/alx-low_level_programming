#include "main.h"
#include <unistd.h>

/**
 * _puts - prints a string of characters
 * @str: the string to be printed by _puts
 * Return: the string
 */

void _puts(char *str)
{
if (str[0] == '\0')
return;

write(1, &str[0], 1);
_puts(str + 1);

}
