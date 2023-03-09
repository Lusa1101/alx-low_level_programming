#include "main.h"
#include <stdio.h>

// to test the _pow_recursion fn

int main(void)
{
int n;

printf("Enter a number: ");
scanf("%d", &n);

printf("The value is %d", _pow_recursion(n, 2));
putchar('\n');

return (0);
}
