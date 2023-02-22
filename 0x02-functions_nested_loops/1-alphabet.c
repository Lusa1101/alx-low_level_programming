#include "main.h"

/**
 * main - prints the alphabets
 *
 * Return: ALways 0
 */

void print_alphabet(void)
{
char i = 'a';

while (i <= 'z')
{
_putchar(i);
i++;
}
_putchar('\n');
}

int main(void)
{

print_alphabet();

return (0);
}
