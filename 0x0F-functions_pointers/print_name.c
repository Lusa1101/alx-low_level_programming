#include "main.h"

/**
 * print_name - print a name
 * @name: the name to be printed
 * @f: pointer to function
 * Return: nothing
 */

print_name(char *name, void (*f)(char *))
{
if (name == '\0' || f == '\0')
return;

f(name);
}
