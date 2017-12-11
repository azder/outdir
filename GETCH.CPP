#include <iostream.h>
#include <stdio.h>
#include <conio.h>
void main()
{
_setcursortype(_NOCURSOR);
int i;
textcolor(15);
textbackground(1);
clrscr();
for (i=0;i<24;i++)
		putch('\n');
for(i=1;i<80;i++)
{
	gotoxy(i,1);
	putch ('\xcd');
	gotoxy(i,24);
	putch('\xcd');
}
for (i=2;i<24;i++)
{ gotoxy(1,i);
	putch('\xba');
	gotoxy(80,i);
	putch('\xba');
}
gotoxy(1,1);
putch('\xc9');
gotoxy(80,1);
putch('\xbb');
gotoxy(80,24);
putch('\xbc)');
gotoxy(1,24);
putch('\xc8');
getch();
}