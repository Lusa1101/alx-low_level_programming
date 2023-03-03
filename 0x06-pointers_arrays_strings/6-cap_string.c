#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: the string parameter
 * Return: The capitalized string
 */

char *cap_string(char *s)
{
int i = 0, j = 0;
char sep[15] = {'.', ' ', '!', '?', '{', '}', ';', '"', '(', ')'};

while (s[i] != '\0')
{
j = 0;

while (j < 10)
{
if (s[i] == sep[j])
{
s[i+1] -= 32;
}

j++;
}

i++;
}

return (s);
}
