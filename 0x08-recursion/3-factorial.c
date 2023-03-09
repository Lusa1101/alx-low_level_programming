#include "main.h"

/**
 * factorial - gets the factorial of a given number
 * @n: the number to be assessed
 * Return: the factorial
 */

int factorial(int n)
{
if (n == 1)
return (1);

return (n * factorial(n - 1));
}
