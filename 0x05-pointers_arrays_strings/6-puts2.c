#include "main.h"

/**
 * @s - string that has the numbers to be printed
 * puts2 - prints every other number from the first number
 * Return: Nothing
 */

void puts2(char *s)
{
int len = 0;

while (s[len] != '\0')
{
len++;
}

for (int i = 0; i < len; i++)
{
if (i % 2 == 0)
_putchar(s[i]);
}

_putchar('\n');
}
