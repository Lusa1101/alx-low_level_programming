#include "3-function_like_macro.h"
#include <stdio.h>

/**
 * main - checks the ABS macro
 * Return: Always 0 for success
 */

int main(void)
{
int i;
int y;

i = ABS(-98) * 10;
y = ABS(98) * 10;
printf("%d, %d\n", i, y);

return (0);
}
