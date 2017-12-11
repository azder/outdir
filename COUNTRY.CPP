
#include <dos.h>
#include <stdio.h>

#define USA 0

int main(void)
{
   struct COUNTRY country_info;

	 country(2, &country_info);
	 printf("The currency symbol is: %s\n",
           country_info.co_curr);
   return 0;
}
