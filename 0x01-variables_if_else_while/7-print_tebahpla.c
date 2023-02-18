#include<stdio.h>
#include<ctype.h>

/**
 * main - converts a char to a lower case
 *
 * Return: Alway 0 (Success)
 */
int main(void)
{
int i = 90;
while (i >= 65)
{
putchar(i + 32);
i++;
}
putchar('\n');
return (0);
}
