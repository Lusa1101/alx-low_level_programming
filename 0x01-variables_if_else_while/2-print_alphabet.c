#include<stdio.h>

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
putchar(tolower(i));
i++;
}
return (0);
}
