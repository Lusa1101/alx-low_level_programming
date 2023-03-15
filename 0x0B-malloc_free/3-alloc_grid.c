#include "main.h"
#include<stdlib.h>

/**
 * alloc_grid - returns a ptr to a 2-D arr if int
 * @width: width of the array
 * @height: height of the array
 * Return: a ptr
 */

int **alloc_grid(int width, int height)
{
int **arr;

if (width <= 0 || height <= 0)
return (NULL);

*arr = malloc (sizeof(int) * height);

arr = malloc (sizeof(int) * width);


return (arr);
}
