#include "main.h"
#include <unistd.h>

/**
 * _print_rev_recursion - prints a string in reverse
 * @str: the string to be printed in reverse
 * Return: prints the string
 */

int _strlen(char *c)
{
int len = 0, sum = 0;

while(c[len] != '\0')
{
sum++;
len++;
}

return (sum);
}

char *rev_str(char *str)
{
int len = _strlen(str), i = 0;
char *b = str;

while (len >= 0)
{
while (i <= _strlen(b))
{
str[i] = b[len];
i++;
}
len--;
}

return (str);
}

void _print_rev_recursion(char *str)
{
rev_str(str);

if (str[0] == '\0')
{
_putchar('\n');
return;
}

_putchar(str[0]);

_print_rev_recursion(str + 1);
}
