#include "graphics.h"
#include "conio.h"
void main(void){
	 int graphdriver = DETECT, graphmode;
	 initgraph(&graphdriver, &graphmode, "..\\bgi");
		circle(50,100,25);
		getch();
		closegraph();
/*   Circle MyCircle(50, 100, 25);    // declare a circle object
	 MyCircle.Show();                 // show it
	 getch();                         // wait for keypress
	 MyCircle.MoveTo(100, 125);       // move the circle (tests hide																	// and show also)
	 getch();
	 MyCircle.Expand(25);             // make it bigger
	 getch();
	 MyCircle.Contract(35);           // make it smaller
	 getch();
	 closegraph();
	 return 0;*/

}