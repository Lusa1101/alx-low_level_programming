#include<stdio.h>

/**
 * main - prints all possible single digit combination
 *
 * Return: Always 0
 */
int main(void)
{
int n = 0, m = 0;

while (n < 9)
{
putchar(n % 10 + '0');
while (m < 10)
{
putchar(m % 10 + '0');
if (n == 8 && m == 9)
break;
putchar(',');
putchar(' ');
m++;
}
n++;
}
putchar('\n');
return (0);
}
