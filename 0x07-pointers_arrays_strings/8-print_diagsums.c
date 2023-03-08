#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of of two diags of a square matric
 * @n: the array
 * @s: the size of the array
 * Return: print the sums
 */

void print_diagsums(int *n, int s)
{
int sum1 = 0, sum2 = 0, i = 0, j = 0;
int p = s;

while (i < s)
{

j = 0;
while (j < s)
{

if (i == j)
{
sum1 += n[i][j];
break;
}

j++;
}

i++;
}

i = 0;
j = 0;

while (i < s)
{

p = s;
while (p >= 0)
{
if (p + i == s)
{
sum2 += n[i][p];
break;
}

p--;
}

i++;
}

printf("%d, %d\n", sum1, sum2);

}
