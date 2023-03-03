#include "main.h"

/**
 * rot13 - used to cypher statements, 13th letter after or before it
 * @str: The statement to be cyphered
 * Return: The cyphered string
 */

char *rot13(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (str[i] >= 65 && str[i] <= 77)
str[i] += 13;

else if (str[i] >= 97 && str[i] <= 109)
str[i] += 13;

else if (str[i] >= 78 && str[i] <= 90)
str[i] -= 13;

else if (str[i] >= 108 && str[i] <= 122)
str[i] -= 13;

i++;
}

return (str);
}
