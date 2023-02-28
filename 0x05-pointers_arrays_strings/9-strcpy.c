#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: points to the buffer
 * @src: point to string being copied
 * Return: string that was copied
 */

char *_strcpy(char *dest, char *src)
{

int len = 0, i = 0;

while (src[len] != '\0')
{
len++;
}

while (i <= len)
{
dest[i] = src[i];
i++;
}

return (dest);
}
