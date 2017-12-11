
 #include <graphics.h>
 #include <stdlib.h>
 #include <stdio.h>
 #include <conio.h>

 #define CLIP_ON 1   /* activates clipping in
viewport */

 int main(void)
 {
    /* request auto detection */
    int gdriver = DETECT, gmode, errorcode;

    /* initialize graphics and local variables */
		initgraph(&gdriver, &gmode, "..\\bgi");

    /* read result of initialization */
    errorcode = graphresult();
    if (errorcode != grOk)  /* an error occurred */
    {
       printf("Graphics error: %s\n", grapherrormsg(errorcode));
       printf("Press any key to halt:");
       getch();
       exit(1); /* terminate with an error code */
    }

    setcolor(getmaxcolor());

    /* message in default full-screen viewport */
		setfillstyle(SOLID_FILL,RED);
		floodfill(1,1,WHITE);
		outtextxy(0, 0, "* <-- (0, 0) in default viewport");
		/* create a smaller viewport */
		getch();
		setviewport(50, 50, getmaxx()-50, getmaxy()-50, CLIP_ON);
		clearviewport();
						getch();
		setfillstyle(SOLID_FILL,BLUE);
		floodfill(1,1,RED);

		setcolor(RED);
		outtextxy(0, 0, "* <-- (0, 0) in smaller viewport");

		/* clean up */
		getch();
		closegraph();
		return 0;
 }
