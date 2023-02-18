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
putchar(n%10 + '0');
n++;
}
putchar('\n');
return (0);
}
