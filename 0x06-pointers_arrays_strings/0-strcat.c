#include "main.h"

/**
 * _strcat - appends two string together
 * @dest: one of the strings
 * @src: second string
 * Return: The appended string
 */

char *_strcat(char *dest, char *src)
{
int len = 0;

while (dest[len] != '\0')
{
len++;
}

int i = 0;

while (src[i] != '\0')
{
dest[len] = src[i];
len++;
i++;
}

dest[len] = '\0';

return (dest);
}
