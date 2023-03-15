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
int i = 0, j = 0;

if (width <= 0 || height <= 0)
return (NULL);

arr = malloc(sizeof(int) * height);

*arr = malloc((sizeof(int) * height) * width);

while (i < width)
{
while (j < height)
{
arr[i][j] = 0;
j++;
}

i++;
}

return (arr);

free(arr);
free(*arr);
}
