#include "main.h"
#include<stdlin.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: the concat string
 */

int _strlen(char *s1)
{
if (s1[0] == '\0')
return (1);

return (1 + _strlen(s1 + 1));
}

char *str_concat(char *s1, char *s2)
{
int len = _strlen(s1) + _strlen(s2);
char *t;
int i = 0, j = 0;

if (s1 == NULL && s2 == NULL)
return (NULL);

t = malloc(sizeof(*t) * len);

while (s1[i] != '\0')
{
t[i] = s1[i];
i++;
}

while (s2[j] != '\0')
{
t[i] = s2[j];
i++;
j++;
}

return (t);
free(t);
}
