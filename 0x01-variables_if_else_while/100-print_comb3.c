#include<stdio.h>

/**
 * main - prints all possible single digit combination
 *
 * Return: Always 0
 */
int main(void)
{
int n = 0, m = 0;
int x = 9, count = 0;
while (n < 9)
{
m = (9 - x);
while (m < 10)
{
if (n != m)
{
putchar(n % 10 + '0');
putchar(m % 10 + '0');
if (count == 44)
break;
putchar(',');
putchar(' ');
count++;
}
m++;
}
x--;
n++;
}
putchar('\n');
return (0);
}
