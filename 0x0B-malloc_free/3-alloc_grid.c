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
int arr[height][width];

if (width <= 0 || height <= 0)
return (NULL);

return (arr);
}
