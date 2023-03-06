#include "main.h"

/**
 * _memcpy - copies the memory area
 * @dest: where the memory will be moved to
 * @src: the memory to be copied
 * @n: the number bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
dest[i] = src[i];
i++;
}

return (0);
}
