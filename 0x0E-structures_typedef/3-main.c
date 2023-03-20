#include "dog.h"
#include <stdio.h>

/**
 * main - checks the typedef
 * Return: Always 0
 */

int main(void)
{
dog_t bishop;

bishop.name = "Bishop";
bishop.age = 1.6;
bishop.owner = "Ndivhu";

printf("The owner, %s of %s the dog of %.1f years is so bubbly.\n", bishop.owner, bishop.name, bishop.age);

return (0);
}
