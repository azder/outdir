#include <iostream.h>
#include <conio.h>
#include <mouse.h>
#define TAB '\t'
void main(){
	mouseinit();
	mouseshow();
	int b,x,y;
	do{
		mousemove(320,100);
//		cout<<b<<TAB<<x<<TAB<<y<<endl;
	}while(27!=getch());
//	waitkbkey();
	mousehide();
}