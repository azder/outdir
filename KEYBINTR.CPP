#include <iostream.h>
#include <conio.h>
#include <dos.h>
#include <mouse.h>
#define TAB '\t'
typedef void interrupt (*iptr)(...);
iptr old=getvect(0x16);
int ax,bx,cx,dx;
void interrupt handler(...){
	ax=_AX;bx=_BX;cx=_CX;dx=_DX;
	old();
}
void main(){
	setvect(0x16,handler);
	do{
		cout<<ax<<TAB<<bx<<TAB<<cx<<TAB<<dx<<endl;
	}while(1);
	setvect(0x16,old);
}