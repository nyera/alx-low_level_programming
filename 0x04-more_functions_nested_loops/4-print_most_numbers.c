#include "main.h"

/*Do not print 2 and 4
*You can only use _putchar 
*twice in your code
*/
void print_most_numbers(void)
{
  int i;

  for (i = 0; i < 10 ; i++)
    {
      if (i != 2 && i != 4)
      {
        _putchr(i + '0');
      }
    }
  _putchar('\n');
}
