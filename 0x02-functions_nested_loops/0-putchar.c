#include "main.h"

/**
 * main - prints char* using user-defined header
 *
 * Return: Always 0
 */
int main(void)
{
char var[9] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
int i = 0;

while (i < 9)
{
_putchar(var[i]);
 i++;
}
_putchar('\n');
return (0);
}
