#include<stdio.h>
#include<ctype.h>

/**
 * main - converts a char to a lower case
 *
 * Return: Alway 0 (Success)
 */
int main(void)
{
string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i = 0;

while (i < alphabet.length())
{
alphabet[i] = tolower(alphabet[i]);
i++;
}
printf("%s\n", alphabet);
return (0);
}
