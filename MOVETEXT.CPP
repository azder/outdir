#include<conio.h>
#include<stdlib.h>
#include <dos.h>

void writechar(char ch)
{
	 struct text_info ti;
	 gettextinfo(&ti);   	 /* grab current text settings */
	 _AH = 9;	 /* interrupt 0x10 sub-function 9 */
	 _AL = ch;	 /* character to be output */
   _BH = 0;                  /* video page */
   _BL = ti.attribute;  /* video attribute */
   _CX = 1;           /* repetition factor */
   geninterrupt(0x10);  /* output the char */
}

void printpeo(){
	textcolor(GREEN);
	gotoxy(67,23);
	cputs("\xc9\xcd\xcd\xcd\xcd\xcd\xcd");
	cputs("\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	gotoxy(67,24);
	cputs("\xbaGoran Peoski\xba");
	gotoxy(67,25);
	cputs("\xc8\xcd\xcd\xcd\xcd\xcd\xcd");
	cputs("\xcd\xcd\xcd\xcd\xcd\xcd");
	gotoxy(80,25);
	writechar('\xbc');
}

void main(){
	int c;
	clrscr();
	textcolor(GREEN);
	_setcursortype(_NOCURSOR);
	randomize();
	for(;!kbhit();){
		c=(3*random(27))%80+1;
		movetext(c,1,c,24,c,2);
//		printpeo();
		gotoxy(c,1);
//		textcolor(random(15)+1);
		if(!random(3))	putch(random(223)+32);
		else putch(0x20);
		for(long i=0;i<500000;i++);
	}
	_setcursortype(_NORMALCURSOR);
}




