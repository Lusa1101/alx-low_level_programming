#include "main.h"

/**
 * puts2 - prints every other number from the first number
 * @s - string that has the numbers to be printed
 * Return: Nothing
 */

void puts2(char *s)
{
int len = 0, i = 0;

while (s[len] != '\0')
{
len++;
}

while (i < len)
{
if (i % 2 == 0)
_putchar(s[i]);
i++;
}

_putchar('\n');
}
