#include "main.h"

/**
 * more_numbers - printnts number to 14 ten times
 *
 * Return: print the numbers
 */
int print(int n)
{
if (n / 10)
print(n / 10);

_putchar(n % 10 + '0');
}

void more_numbers(void)
{
int i = 0, j = 0;

while (j < 10)
{
while (i < 15)
{
print(i);
i++;
}
j++;
}

_putchar('\n');
}
