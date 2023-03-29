#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints char
 * @c: the char to be printed
 * Return: on success 1
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
