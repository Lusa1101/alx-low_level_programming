#include "main.h"
#include <stdio.h>

int main(void)
{

char *str;
int len;

str = "My first strlen!";
len = _strlen(str);

printf("The size is %d\n",len);

return (0);
}
 
