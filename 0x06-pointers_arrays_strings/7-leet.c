#include "main.h"

/**
 * leet - encodes a statement into 1337
 * @str: The statement to be encoded
 * Return: The encoded statement
 */

char * leet(char *str)
{
int i = 0, j = 0;
char arr[10] = {'a', 'A', 'e', 'E', 'l', 'L', 't', 'T', 'o', 'O'};
char num[10] = {'4', '4', '3', '3', '1', '1', '7', '7', '0', '0'};

while (str[i] != '\0')
{
j = 0;

while (j < 10)
{
if (str[i] == arr[j])
str[i] = num[i];

j++;
}

i++;
}

return (str);
}
