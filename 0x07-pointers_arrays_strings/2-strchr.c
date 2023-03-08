#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string to be used
 * @c: the character
 * Return: pointer to the first occurence of c in s or NULL otherwise
 */

char *_strchr(char *s, char c)
{
char *b;
int i = 0, j = 0, p = 0;

while (s[i] != '\0')
{
if (s[i] == c)
{
p = i;
while (s[p] != '\0')
{
b[j] = s[p];
j++;
p++;
}

break;
}

else if (s[i + 1] == '\0')
b = "NULL";

i++;
}

s = b;

return (s);
}
