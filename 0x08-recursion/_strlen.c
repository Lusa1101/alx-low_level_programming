#include "main.h"

/**
 * _strlen - counts the number char in a string
 * @c: the string
 * Return: the number of char
 */

int _strlen(char *c)
{
int len = 0, sum = 0;

while (c[len] != '\0')
{
sum += 1;
len++;
}

sum++;

return (sum);
}
