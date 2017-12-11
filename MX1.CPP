#include<conio.h>
#include<iostream.h>
#include<string.h>
#include<stdlib.h>
#include<dos.h>

#define LASTCHAR 255
#define FIRSTCHAR 33
#define MINDELAY 50
#define MAXDELAY 150
#define DARKCOLOR GREEN
#define LIGHTCOLOR LIGHTGREEN
#define NOKEY
/*Use this setting onlly for private scr*/

void copyright();
void onexit();
void init();
void moveline(int l);
inline char getchar();
void print(int l,char c);
void genlines();
inline int rnd(int min,int max);
void cmdline(int,char**);
void printhelp();

struct mxline{
	int full,blank,delay,left;
};

mxline mx[80]={0};
int minc=FIRSTCHAR,maxc=LASTCHAR;

void main(int argc,char* argv[]){
	cmdline(--argc,++argv);
	init();
	genlines();
	int i;
#ifndef NOKEY
	while(!kbhit()){
#else
	for(;;){
		if(kbhit() && 27==getch()) break;
#endif
		for(i=1;i<80;i+=3){
			if(mx[i].left)
				mx[i].left--;
			else{
				moveline(i);
				mx[i].left=mx[i].delay;
			}
		}
		delay(1);
	}
}
void cmdline(int n,char *s[]){
	int i;
	for(i=0;i<n;i++){
		if(!stricmp(s[i],"/?")){
			printhelp();
			exit(0);
		}
	}
}
void moveline(int l){
	mxline &ln=mx[l];
	if(!ln.full){
		if(!ln.blank){
			ln.full=random(400)+3;
			textcolor(LIGHTCOLOR);
			print(l,getchar());
		}else{
			ln.blank--;
			print(l,' ');
		}
	}else{
		ln.full--;
		print(l,getchar());
		textcolor(DARKCOLOR);
		if(!ln.full) ln.blank=random(40)+3;
	}
}
void genlines(){
	for(int i=1;i<80;i+=3){
		mx[i].delay=rnd(MINDELAY/10,MAXDELAY/10);
		switch(random(3)){
			case 1:mx[i].delay*=2;break;
			case 2:mx[i].delay*=3;break;
		};
		mx[i].left=mx[i].delay;
	}
}

inline int rnd(int min,int max){return random(max-min)+min;}
inline char getchar(){return rnd(minc,maxc);}

void copyright(){
	textcolor(LIGHTCOLOR);
	gotoxy(27,11);cputs("旼컴컴컴컴컴컴컴컴컴컴컴커");
	gotoxy(27,12);cputs("� Copyright(c) Peo Corp. �");
	gotoxy(27,13);cputs("읕컴컴컴컴컴컴컴컴컴컴컴켸");
}


void print(int l,char c){
	gotoxy(l,1);
	movetext(l,1,l,24,l,2);
	putch(c);
}

void onexit(){
#ifndef NOKEY
	if(getch()!=27){
		copyright();
		getch();
	}
#endif
	gotoxy(80,25);
	_setcursortype(_NORMALCURSOR);
}
void init(){
	clrscr();
	textmode(C80);
	textcolor(DARKCOLOR);
	textbackground(BLACK);
	_setcursortype(_NOCURSOR);
	randomize();
	atexit(onexit);
}
void printhelp(){
	clrscr();
	cout<<"Matrix for Dos\tCopyright(c)\tGoran Peoski\n";
}