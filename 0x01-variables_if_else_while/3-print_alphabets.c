#include<stdio.h>

/**
 * main - prints word in both cases
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x = 'A';
while (x <= 'Z')
{
putchar(x + 32);
x++;
}
while (x <= 'Z')
{
putchar(x);
x++;
}
putchar('\n');
return (0);
}
