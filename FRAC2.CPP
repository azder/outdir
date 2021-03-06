#include <iostream.h>
#include <math.h>
#include <conio.h>
#include <graphics.h>
#include <stdio.h>
#include <stdlib.h>
#define TAB '\t'
#define STOP '\x1B'
//decl
void text();
int boja(double x,double y);
inline int errorgraph();
inline void debug(char* text);
void mendel1();
void mendel2();
void copyright();
//decl kraj
//globalni
float s=-1,e=-.5,t=.01,mboja=25,mod=1;
//globalni kraj
int boja(double x,double y){
	double a=0,b=0,t;
	int c=0;
	do{
		c++;t=a;
		a=t*t-b*b+x;
		b=2.0*t*b+y;
		if(kbhit() && STOP==getch()) exit(0);
	}while((c<mboja) && ((a*a+b*b)<mod));
	return c;
}
inline int errorgraph(){
	int errorcode=graphresult();
	if (grOk==errorcode) return 0;
	printf("Graficka greska: %s\n", grapherrormsg(errorcode));;
	printf("Pritisni kopce za kraj:");getch();return 1;
}
inline void graphend(){closegraph();}
inline void graphstart(){
	int gdriver = DETECT, gmode, errorcode;
	initgraph(&gdriver, &gmode, "egavga.bgi");
	if(errorgraph()) exit(0);
	atexit(graphend);
	setcolor(WHITE);
	rectangle(5,5,407,407);
	rectangle(410,5,getmaxx()-5,407);
	rectangle(5,410,getmaxx()-5,getmaxy()-5);
	rectangle(0,0,getmaxx(),getmaxy());
	setfillstyle(SOLID_FILL, BLUE);
	floodfill(1,1,WHITE);
	setfillstyle(SOLID_FILL, RED);
	floodfill(450,450,WHITE);
	outtextxy(10,430,"Goran Peoski 8583");
	setfillstyle(SOLID_FILL, BLACK);
	floodfill(50,50,WHITE);
	text();
}
void text(){
	gotoxy(53,2);cout<<"Pocetok = ";
	gotoxy(63,2);cout<<s;
	gotoxy(53,3);cout<<"Kraj    = ";
	gotoxy(63,3);cout<<e;
	gotoxy(53,4);cout<<"Tocnost = ";
	gotoxy(63,4);cout<<t;
	gotoxy(53,5);cout<<"Modul   = ";
	gotoxy(63,5);cout<<mod;
	gotoxy(53,6);cout<<"Boi     = ";
	gotoxy(63,6);cout<<mboja;
}

inline float fw(){return fabs(e)+fabs(s);};

void main(){
	graphstart();
	mendel2();
	getch();
}

void mendel1(){
	float x,y,fs=fabs(s),w=fw();
	float mn=(400/w);
	for(x=s;x<e;x+=t)
		for(y=s;y<e;y+=t){
			putpixel((x+fabs(s))*400/w+6
							,(y+fabs(s))*400/w+6
							,boja(x,y));
			if(kbhit() && STOP==getch()) return;
		}
}

void mendel2(){
	int x,y;
	float w=fw();
	float r=400/w;
	for(x=6;x<406;x++)
		for(y=6;y<406;y++){
			putpixel(x,y
							,boja((x-6)*w/400-fabs(s)
										,(y-6)*w/400-fabs(s)
							));
			if(kbhit() && STOP==getch()) return;
		}
}