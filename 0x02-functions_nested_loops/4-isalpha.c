#include "main.h"

/**
 * _isalpha -prints 1 for all alphabets
 *
 * Return: Always 1 for any characters
 */
int _isalpha (int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
