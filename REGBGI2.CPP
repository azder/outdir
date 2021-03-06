#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void main()
{
	 int gdriver = DETECT, gmode, errorcode;
	 errorcode = registerbgidriver(EGAVGA_driver);
	 if (errorcode < 0)
	 {
			printf("Graphics error: %s\n", grapherrormsg(errorcode));
			printf("Press any key to halt:");
			getch();
			exit(1); /* terminate with an error code */
	 }
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

   /* draw a line */
   line(0, 0, getmaxx(), getmaxy());

   /* clean up */
   getch();
   closegraph();
}