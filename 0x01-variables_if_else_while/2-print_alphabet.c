#include<stdio.h>
#include<ctype.h>

/**
 * main - converts a char to a lower case
 *
 * Return: Alway 0 (Success)
 */
int main(void)
{
int i = 65;
while (i <= 90)
{
putchar(i+32);
i++;
}
return (0);
}
