#include "main.h"

/**
 * puts_half - print half of a string
 * @s: the string to be printed
 * Return: Nothing
 */

void puts_half(chat *s)
{
int len = 0, i = 0, n;

while (s[len] != 0)
{
len++;
}

if (len / 2 != 0)
n = (len - 1) / 2;

else
n = len / 2;

while (n < len)
{
_putchar(s[n]);
n++;
}

_putchar('\n');
}
