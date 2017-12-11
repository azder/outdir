//clear87

#include <stdio.h>
#include <float.h>

int main(void)
{
   float x;
   double y = 1.5e-100;

   printf("\nStatus 87 before error: %X\n", _status87());

   x = y; /* create underflow and precision loss */
   printf("Status 87 after  error: %X\n", _status87());

   _clear87();
   printf("Status 87 after  clear: %X\n", _status87());

   y = x;

   return 0;
}
