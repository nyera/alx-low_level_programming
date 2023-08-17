#include "main.h"

/*Do not print 2 and 4
*You can only use _putchar 
*twice in your code
*/
void more_numbers(void)
{
  int j;
    int i;
  for (j = 0; j <= 10; j++)
    {  
         for (i = 0; i < 15 ; i++)
    {
          if (j <= 10)
          
            	_putchar(j / 10 + '0');
		        	_putchar(j % 10 + '0');
           
    }  
       _putchar('\n');
    }


}
