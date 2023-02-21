#include "_putchar.h"

int main(void)
{
  char var[9] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
  int i = 0;

  while (i < 9)
    {
      _putchar(var[i]);
    }

  return (0);
}
