#include "dog.h"
#include <stdio.h>

/**
 * main - checks the init_dog prototype
 * Return: Always 0
 */

int main(void)
{
struct dog my_dog;
char *name;
char *owner;
float age;

name = "Lucy";
age = (12 / 10);
owner = "Picca";

init_dog(&my_dog, name, age, owner);

printf("%s has been well up to the age of %.2f and continues to. All thanks to %s", name, age, owner);

return (0);
}
