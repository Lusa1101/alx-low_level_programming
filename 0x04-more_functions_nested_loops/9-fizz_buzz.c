#include <stdio.h>

/**
 * main - prints the fizz buzz test
 * Return: Always 0
 */
int main(void)
{
int j = 1;

while (j <= 100)
{
if ( j % 15 == 0)
printf("FizzBuzz ");
  
else if (j % 3 == 0)
printf("Fizz ");

else if (j % 5 == 0)
printf("Buzz ");
 
else
printf("%d ",j);

j++;
}
putchar('\n');

return (0);
}
