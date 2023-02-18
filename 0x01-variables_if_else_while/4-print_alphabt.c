#include<stdio.h>

/**
 * main - prints all the alpha but q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x = 'a';
while (x <= 'z')
{
if (x != 'e' && x != 'q')
putchar(x);
x++;
}
return (0);
}
