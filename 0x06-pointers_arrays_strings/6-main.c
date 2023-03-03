#include "main.h"
#include <stdio.h>

// To check the cap_string function

int main(void)
{
char sentence[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello world! hello-world 0123456hello world\thello world.hello world\n";
char *ptr;

ptr = cap_string(sentence);

printf("%s", ptr);
printf("%s", sentence);

return (0);
}

