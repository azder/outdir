#include <stdlib.h>
#include <conio.h>

#define WIDTH 80
#define HEIGHT 25
void initg();
inline void closeg();
class line{
	char ln[HEIGHT];
	int printable;
	int blank;
	int delay;
public:
	void generate(){
		for(int i=0;i<sizeof(ln);i++)
			ln[i]=
	};
};

class matix{
	char mx[80][25];
	int activeline;
	void printc();
public:
	int alternating;
	void moveline(int);
	void generatelines(){};
	matrix(){

	};
};






void moveline(int l){
	mxline &ln=mx[l];
	if(!ln.full){
		if(!ln.blank){
			ln.full=random(FULLNUM)+3;
			textcolor(LIGHTCOLOR);
#ifdef ALTERNATING
			cc=CCLC;
#endif
			print(l,getcharacter());
		}else{
			ln.blank--;
			print(l,' ');
		}
	}else{
		ln.full--;
		print(l,getcharacter());
		textcolor(DARKCOLOR);
#ifdef ALTERNATING
		cc=CCDC;
#endif
		if(!ln.full) ln.blank=random(BLANKNUM)+3;
	}
}

void genlines(){
	for(int i=1;i<80;i+=SKIPNUM){
		switch(random(3)){
			case 0:mx[i].delay=rnd(MINDELAY,MAXDELAY);break;
			case 1:mx[i].delay=2*rnd(MINDELAY,MAXDELAY);break;
			case 2:mx[i].delay=3*rnd(MINDELAY,MAXDELAY);break;
		};
		mx[i].left=mx[i].delay;
	}
}

inline int rnd(int min,int max){return random(max-min)+min;}
inline char getcharacter(){return rnd(minc,maxc);}

void copyright(){
	textcolor(LIGHTCOLOR);
	gotoxy(27,11);cputs("旼컴컴컴컴컴컴컴컴컴컴컴커");
	gotoxy(27,12);cputs("� Copyright(c) Peo Corp. �");
	gotoxy(27,13);cputs("읕컴컴컴컴컴컴컴컴컴컴컴켸");
}
//done
void initg(){
	int gdriver = DETECT, gmode=DETECT,errorcode;
	initgraph(&gdriver, &gmode, "");/* initialize graphics mode */
	errorcode = graphresult();/* read result of initialization */
	if (errorcode != grOk){  /* an error occurred */
	 printf("Graphics error: %s\n", grapherrormsg(errorcode));
	 printf("Press any key to halt:\n");
	 getch();
	 exit(1);             /* return with error code */
	}
}
inline void closeg(){closegraph();}