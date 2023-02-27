#include "main.h"

/**
 * _strlen - gets the length of a string
 * @s: the string to assessed
 * Return: Nothing
 */

int _strlen(char *s)
{
int length, i = 0;

length = 0;

while (s[i] != '\0')
{
length += 1;
i++;
}

return (length);
}
