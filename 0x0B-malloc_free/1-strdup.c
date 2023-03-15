#include "main.h"
#include<stdlib.h>

/**
 * _strdup - returns a ptr to newly alloc space with a copy of str
 * @str: the string's ptr
 * _strlen - returns the length of a string
 * Return: a ptr
 */

int _strlen(char *str)
{
if (str[0] == '\0')
return (0);

return (1 + _strlen(str + 1));
}

char *_strdup(char *str)
{
char *t;
int s = _strlen(str) - 1, i = 0;

if (NULL)
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
