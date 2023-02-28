#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: points to the buffer
 * @src: point to string being copied
 * Return: string that was copied
 */

char *_strcpy(char *dest, char *src)
{
char str;

str = *src;

*dest = str;

return (dest);
}
