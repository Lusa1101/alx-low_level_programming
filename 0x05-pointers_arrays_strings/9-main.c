#include "main.h"
#include <stdio.h>

int main(void)
{
char s1[98];
char *ptr;

ptr = _strcpy(s1, "My name is Omphulusa Mashau\n");
printf("%s ", s1);
printf("%s ", ptr);

return 0;
}
