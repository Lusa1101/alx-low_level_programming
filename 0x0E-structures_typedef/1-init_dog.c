#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initiates the struct dog
 * @d: the struct dog object
 * @name: name given to the dog
 * @owner: name of the dog's owner
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
(*d).name = name;
d -> age = age;
d -> owner = owner;
}
