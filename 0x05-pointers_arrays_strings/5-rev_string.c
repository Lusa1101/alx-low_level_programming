#include "main.h"

/**
 * rev_string - print a words in a string in reverse
 * @c: the group of string to be printed in reverse
 * Return: Nothing
 */

void rev_string(char *c)
{
int len = 0;

while (c[len] != '\0')
{
len++;
}

len--;

while (len >= 0)
{
_putchar(c[len]);
len--;
}

_putchar('\n');
}
