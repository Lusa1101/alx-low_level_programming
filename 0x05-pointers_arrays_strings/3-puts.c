#include "main.h"

/**
 * _puts - prints a string
 * @str: the string to printed
 * Return: Nothing
 */

void _puts(char *str)
{
int len;

len = 0;

while (str[len] != '\0')
{
_putchar(str[len]);
len++;
}
}

