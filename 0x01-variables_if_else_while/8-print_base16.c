#include<stdio.h>

/**
 * main - prints the base 16 characters
 *
 * Return: Always 0
 */
int main(void)
{
int n = 0;

while (n < 16)
{
if (n < 10)
putchar(n % 10 + '0');
else
putchar(n + 87);
n++;
}
putchar('\n');
return (0);
}
