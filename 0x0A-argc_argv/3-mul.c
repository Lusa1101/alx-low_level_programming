#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * main - multiplies two numbers from args
 * @argc: length of array
 * @argv: arr of args
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int answer;
int num1, num2;

if (argv[1] == NULL || argv[2] == NULL)
print("Error\n");

else
{
num1 = atoi(argv[1]);
num2 = atoi(argv[argc - 1]);

answer = num1 * num2;

printf("%d\n", answer);
}

return (0);
}
