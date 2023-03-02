#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: Always 1 for success
 */

int _strcmp(char *s1, char *s2)
{
int i = 0, j = 0, n = 1;

while (s1[i] != '\0')
{
j = 0;
while (s2[j] != '\0')
{
if (s1[i] != s2[j])
{
n = s1[i] - s2[j];
break;
}
else if (s1[i] == s2[j])
{
n = 0;
break;
}
j++;
}

if (n != 1)
break;

i++;
}

return (n);
}
