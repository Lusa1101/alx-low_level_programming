#include "main.h"

/**
 * rot13 - used to cypher statements, 13th letter after or before it
 * @str: The statement to be cyphered
 * Return: The cyphered string
 */

char *rot13(char *str)
{
int i = 0, j = 0;

char first[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};
char second[] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'X', 'Y', 'Z'};

while (str[i] != '\0')
{
j = 0;
while (j < 26)
{
if (str[i] == first[j])
str[i] = second[j];

else if (str[i] == second[j])
str[i] = first[j];

j++;
}

i++;
}

return (str);
}
