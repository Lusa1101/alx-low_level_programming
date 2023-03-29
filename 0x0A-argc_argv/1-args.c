#include "main.h"
#include <stdlib.h>
/**
 * main - prints number of args
 * @argc: number of elements in argv
 * @argv: the array of args
 * Return: Always 0
 */
int main(int argc, char* argv[])
{
int numberOfArgs, i = 0;

while(argv[i] != NULL && i < argc)
{
numberOfArgs += 1;
i++;
}

_putchar(numberOfArgs % 10 + '0');
_putchar('\n');
return (0);
}

