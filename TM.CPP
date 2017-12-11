#include <iostream.h>
#include <conio.h>
#include <windows.h>
#include <mouse.cpp>
#define TAB '\t'


void interrupt handler(){
	static i=0;
	int BX,CX,DX;
	mousestat(BX,CX,DX);
	cout<<"Mouse: "<<++i<<TAB;
	cout<<_BX<<TAB;
	cout<<BX<<TAB;
	cout<<CX<<TAB;
	cout<<DX<<endl;
}
void main(){
	mouseinit();
	mouseshow();
	asm{
		mov ax,SEG handler;
		mov es,ax;
		mov dx,OFFSET handler;
		mov cx,21;
		mov ax,12;
		int 0x33;
	}
	int c=0;
	do{
		c=waitkbhit();
		cout<<"Keyb: "<<(int)LOBYTE(c);
		cout<<TAB<<(int)HIBYTE(c)<<endl;
	}while(LOBYTE(c)!=27);
}
