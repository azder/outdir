//#include <constrea.h>
#include <iostream.h>
#include <conio.h>
#include <string.h>
void pak();
void main()
{
//conbuf a;
clrscr();
textmode(C80);
textcolor(BLACK+BLINK);
textbackground(WHITE);
highvideo();
_setcursortype(_NOCURSOR);
char *password;
//cin >>password;
password=getpass("What's the password \
(maximum 8 chars):");
cout <<"The password is:"<<password<<endl;
window(10,10,40,25);
//cout <<"Goran";
for (int i=0; i<9; i++)
{
		textattr(i + ((i+1) << 4));
		cprintf("This is a test\r\n");
}
pak();
movetext(1,3,10,10,25,3);
/*for ( i=0;i<20;i++){
	gotoxy(1,1);
	delline();
} */
pak();
}
void pak(){
cprintf("Press a key...\n\r");
getch();
}
