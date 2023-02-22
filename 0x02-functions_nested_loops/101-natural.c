#include <stdio.h>

/**
 * main - print sum of multiples of 5 and 3
 *
 * Return: Alway 0 for success
 */
int main(void)
{
int sum = 0, n = 1024;

for (int n = 1024; n > 0; n--)
{
if (n % 3)
sum += n;
else if (n % 5 == 0)
sum += n;
}
printf("%d\n", sum);
return (0);
}
