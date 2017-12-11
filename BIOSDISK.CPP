
#include <bios.h>
#include <stdio.h>

int main(void)
{
   int result;
   char buffer[512];

   printf("Testing to see if drive a: is ready\n");
   result = biosdisk(4,0,0,0,0,1,buffer);
   result &= 0x02;
   (result) ? (printf("Drive A: Ready\n")) :
              (printf("Drive A: Not Ready\n"));

   return 0;
}
