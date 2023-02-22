#include "main.h"

int _isalpha (int c)
{
if (c >= 65 && c <= 90)
return (1);
else if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
