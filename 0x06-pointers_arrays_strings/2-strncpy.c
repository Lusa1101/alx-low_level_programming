#include "main.h"

/**
 * _strncpy - copies a string that is limited
 * @dest: string to take the copy
 * @src: string to be copied
 * @n: the limit of the string
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

while (src[i] != '\0')
{
if (i >= n)
break;

else
dest[i] = src[i];

i++;
}

return (dest);
}
