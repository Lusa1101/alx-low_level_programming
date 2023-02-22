#include "main.h"

/**
 * print_to_98 - prints number to 98
 *
 * Return: Always the value
 */
void print_to_98(int n)
{
  while (n <= 98)
    {
      n = n + 1;
      _putchar(n % 10 + '0');

      if (n != 98)
	{
	  _putchar(',');
	  _putchar(' ');
	}
      n++;
     )
    while ( n => 98)
      {
	n = n - 1;
	_putchar(n % 10 + '0');

	if (n != 98)
	  {
	    _putchar(',');
	    _putchar(' ');
	  }
	n--;
      }
}
