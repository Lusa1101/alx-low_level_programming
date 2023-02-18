#include<stdio.h>

/**
 * main - prints all possible single digit combination
 *
 * Return: Always 0 
 */
int main(void)
{
int n = 0;

while (n < 10)
{
putchar(n % 10 + '0');
if (n == 9)
break;
putchar(',');
putchar(' ');
n++;
}
putchar('\n');
return (0);
}
