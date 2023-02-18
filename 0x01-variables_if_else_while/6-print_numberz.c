#include<stdio.h>

/**
 * main - Prints single digit number
 *
 * Return: Always 0
 */
int main(void)
{
char n = '0';
while (n < 10)
{
putchar(n);
n++;
}
putchar('\n');
return (0);
}
