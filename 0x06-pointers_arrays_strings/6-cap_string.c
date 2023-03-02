#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: the string parameter
 * Return: The capitalized string
 */

char *cap_string(char *s)
{
int i = 0;

while (s[i] != '\0')
{
if (s[i] == ' ')
{
if (s[i+1] > 96 && s[i+1] < 123)
{
s[i+1] -= 32;
}
}
i++;
}

return (s);
}
