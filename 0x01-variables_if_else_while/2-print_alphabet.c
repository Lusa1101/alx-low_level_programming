#include<stdio.h>
#include<ctype.h>

/**
 * main - converts a char to a lower case
 *
 * Return: Alway 0 (Success)
 */
int main(void)
{
int i = 'A';
while (i <= 'Z')
{
i = tolower(i);
putchar(i);
i++;
}
return (0);
}
