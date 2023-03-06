#include "main.h"

/**
 * _memset - funct that fills bytes of the memory
 * @s: points to the memory area
 * @b: with this constant byte
 * @n: number of bytes to be filled
 * Return: a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
while (n >= 0)
{
s[n] = b;
n--;
}

return (s);
}
