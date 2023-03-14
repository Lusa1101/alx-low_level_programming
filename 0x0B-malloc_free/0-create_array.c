#include "main.h"
#include<stdlib.h>

/**
 * create_array - create an array of chars and initiates it with a specific char
 * @size: size of the array
 * @c: the chars to be inserted in the array
 * Return: nothing
 */

char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i = 0;
arr = malloc(sizeof(*arr) * size);

while (i < size)
{
arr[i] = c;
i++;
}

free(arr);

return (arr);
}
