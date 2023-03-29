#include "main.h"

/**
 * main - prints all the args
 * @argc: number of elements in arrays
 * @argv: an array of args
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
print(argv[i]);
_putchar('\n');
}

return (0);
}
