#include "main.h"

/**
 * print - prints a string
 * @str: the string to be printed
 * Return: nothing
 */
void print(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
}
