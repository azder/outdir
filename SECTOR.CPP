#include <dos.h>
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int midx, midy, i;
   int stangle = 45, endangle = 135;
   int xrad = 100, yrad = 50;
	 registerbgidriver(EGAVGA_driver);
   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "");

	 /* read result of initialization */
	 errorcode = graphresult();
	 if (errorcode != grOk)  /* an error occurred */
	 {
			printf("Graphics error: %s\n", grapherrormsg(errorcode));
			printf("Press any key to halt:");
			getch();
			exit(1); /* terminate with an error code */
	 }

	 midx = getmaxx() / 2;
	 midy = getmaxy() / 2;
	 /* loop through the fill patterns */
	 for (i=EMPTY_FILL; i<USER_FILL; i++)
	 {
			/* set the fill style */
			for(int j=0;j<getmaxcolor();j++){
				setfillstyle(i, j);
				delay(100);
				/* draw the sector slice */
				sector(midx, midy, stangle, endangle, xrad, yrad);
			}
//			getch();
   }

   /* clean up */
   closegraph();
   return 0;
}
