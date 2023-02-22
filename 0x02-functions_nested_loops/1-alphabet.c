#include "main.h"

/**
 * main - prints the alphabets
 *
 * Return: ALways 0
 */

void print_alphabet(void)
{
int i = 65;

while (i < 91)
{
_putchar(i);
}
_putchar('\n');
}

int main(void)
{

print_alphabet();

return (0);
}
