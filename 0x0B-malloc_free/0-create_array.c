#include "main.h"
#include<stdlib.h>

/**
 * create_array - create array of chars and initiates it with a specific char
 * @size: size of the array
 * @c: the chars to be inserted in the array
 * Return: nothing
 */

char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i = 0;

if (size == 0)
return (NULL);

arr = malloc(sizeof(*arr) * size);

while (i < size)
{
arr[i] = c;
i++;
}

return (arr);

free(arr);
}
