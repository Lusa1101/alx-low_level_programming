#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: the string parameter
 * Return: The capitalized string
 */

char *cap_string(char *s)
{
int i = 0, j = 0;
char sep[15] = {'.', ' ', '!', '?', '{', '}', ';', '"', '(', ',', ')', '\t', '\n'};

while (s[i] != '\0')
{
j = 0;

while (j < 14)
{
if (s[i] == sep[j])
{
if (s[i + 1] >= 97 && s[i + 1] <= 122)
s[i + 1] -= 32;
}

j++;
}

i++;
}

return (s);
}
