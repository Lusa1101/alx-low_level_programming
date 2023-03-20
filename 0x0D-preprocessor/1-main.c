#include <stdio.h>
#include "1-pi.h"

/**
 * main - checking the PI
 * Return: 0 for success
 */

int main(void)
{
double area, radius;

printf("Enter the radius of the circle : ");
scanf("%lf", &radius);

area = 0.5 * (PI * radius * radius);

printf("The area is %lf\n", area);

return (0);
}
