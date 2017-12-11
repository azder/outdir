#include <iostream.h>
#include <dos.h>
#include <conio.h>
#define TAB '\t'
void handler(char,char,char);
void im(int&,int&,int&,int&);

void main(){
	int a=0,b=0,c=0,d=0;
	while(!kbhit()){
		a=b=c=d=0;
		switch(getch()){
			case '0':a=0;break;
			case '1':a=1;break;
			case '2':a=2;break;
			case '3':a=3;break;
			case 'c':a=0xC;c=21;
				asm les dx,handler;
				break;
			case 27 :return;
		}
		im(a,b,c,d);
		cout<<a<<'\t'<<b<<'\t';
		cout<<c<<'\t'<<d<<endl;
	}
}

void handler(char a,char b,char c){
	cout<<"Handler:"<<a<<TAB;
	cout<<b<<TAB<<c<<endl;
}
void im(int &ax,int &bx,int &cx,int &dx){
	REGPACK r;
	r.r_ax=ax;
	r.r_bx=bx;
	r.r_cx=cx;
	r.r_dx=dx;
	intr(0x33,&r);
	ax=r.r_ax;
	bx=r.r_bx;
	cx=r.r_cx;
	dx=r.r_dx;
}
