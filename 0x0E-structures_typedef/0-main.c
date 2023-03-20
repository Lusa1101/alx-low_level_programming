#include "dog.h"
#include <stdio.h>

/**
 * main - checks the struct
 * Return: Always 0
 */

int main(void)
{
struct dog dog1;

dog1.name = "Lucifer";
dog1.age = 1.3;
dog1.owner = "Ndivhuwo Mashau";

printf("The dog, %s of age %.2f its owner is %s.\n", dog1.name, dog1.age, dog1.owner);

return (0);
}
