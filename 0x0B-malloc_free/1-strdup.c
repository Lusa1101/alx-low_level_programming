#include "main.h"
#include<stdlib.h>

/**
 * _strdup - returns a ptr to newly alloc space with a copy of str
 * @str: the string's ptr
 * Return: a ptr
 */

int _strlen(char *str)
{
if (str[0] == '\0')
return (0);

return (1 + _strlen(str + 1);
}

char *_strdup(char *str)
{
char *t;
int s = _strlen(str), i = 0;

if (str == NULL)
return (NULL);

t = malloc(sizeof(*t) * s);

while (str[i] != '\0')
{
t[i] = str[i];
i++;
}

return (t);

free(t);
}
