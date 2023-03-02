#include "main.h"

/**
 * _strncat - function appends two strings at most n bytes
 * @dest: one of the strings
 * @src: second string
 * @n: number of bytes
 * Return: the appended strings
 */

char *_strncat(char *dest, char *src, int n)
{
int len = 0, i = 0;

while (dest[len] != '\0')
{
len++;
}

while (src[i] != '\0')
{
if (i >= n)
break;

else
dest[len] = src[i];

i++;
len++;
}

return (dest);
}
