#include<stdio.h>

/**
 * main - converts a char to a lower case
 *
 * Return: Alway 0 (Success)
 */
int main(void)
{
for(int i = 'A'; i <= 'Z'; i++)
{
i = tolower(i);
putchar(i);
}
return (0);
}
