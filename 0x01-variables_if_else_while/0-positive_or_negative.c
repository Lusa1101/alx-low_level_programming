#include<stdio.h>
#include<stlib.h>
#include<time.h>

/**
 * main - prints whether a number id negative or positive
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if(n == 0)
printf("is zero\n");
else if(n < 0)
printf("is negative\n");
else
printf("is positive\n");
return (0);
}
