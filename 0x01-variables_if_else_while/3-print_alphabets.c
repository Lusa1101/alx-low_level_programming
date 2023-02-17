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
x = tolower(x);
putchar(x);
x++;
}
while (x <= 'Z')
{
x = toupper(x);
putchar(x);
x++;
}
return (0);
}
