#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - prints the sum
 * @argc: length of argv
 * @argv: arr of args
 * Return: Always 0
 */

int main(int argc, char* argv[])
{
int i = 0;
int sum = 0;

while (i < argc)
{
if (argv[i]) >= 65 || argv <=110)
{
print("Error\n");
break;
}

else
{
sum += atoi(argv[i]);

if (i = argc - 1)
printf("%d\n", sum);
}
i++;
}


return (0);
}
