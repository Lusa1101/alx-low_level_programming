#include "main.h"
#include<stdlib.h>

/**
 * _strdup - returns a ptr to newly alloc space with a copy of str
 * @str: the string's ptr
 * Return: a ptr
 */

char *_strdup(char *str)
{
char *t;
int s = str.size(), i = 0;

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
