#include "dog.h"
#include <stdio.h>

/**
 * main - checks the print_dog
 * Return: Always 0
 */

int main(void)
{
struct dog bro_dog;
struct dog bishop;
struct dog okay;

bro_dog.name = "OREO";
bro_dog.age = 12;
bro_dog.owner = "OMPHULUSA";

print_dog(&bro_dog);
printf("The bro_dog is done. Next is null.\n");

bishop.name = "Bishop";
print_dog(&bishop);
printf("Done\n");
print_dog(&okay);
return (0);
}
