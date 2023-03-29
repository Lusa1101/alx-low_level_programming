#include<stdio.h>
#include "main.h"

/**
 * main - prints the new files name
 * @argc: nuber of elements in argv
 * @argv: array of command lines
 * Return: nothing
 */
int main(int argc, char* argv[])
{
printf("%s\n", argv[argc - 1]);
_putchar('\n');

return (0);
}
