#include "dog.h"
#include <stdio.h>

/**
 * main - checks the prototype new_dog
 * Return: Always 0
 */

int main(void)
{

dog_t *myd;

myd = new_dog("Luci", 2.3, "Omphulusa");
printf("The dog name %s and age of %.1f belongs to my brother %s", myd -> name, myd -> age, myd -> owner);

return (0);
}
