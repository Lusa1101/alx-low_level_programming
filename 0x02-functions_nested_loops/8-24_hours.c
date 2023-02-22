#include "main.h"

/**
 * jack_bauer - prints every second of the 24 hours
 *
 * Return: Each second per line
 */
void jack_bauer(void)
{
int a = 0, b = 0, c = 0, d = 0, x;

while (a < 3)
{

if (a == 2)
x = 4;
else
x = 10;

b = 0;
while (b < x)
{
c = 0;
while (c < 6)
{
d = 0;
while (d < 10)
{
_putchar(a % 10 + '0');
_putchar(b % 10 + '0');
_putchar(':');
_putchar(c % 10 + '0');
_putchar(d % 10 + '0');
_putchar('\n');

if (a == 2 && b == 3)
{
if (c == 5 && d == 9)
break;
}

d++;
}

c++;

}

b++;

}

a++;
}
}
