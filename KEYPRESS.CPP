#pragma hdrfile "keypress.sym"
#include <bios.h>
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <stdlib.h>
#include <ctype.h>
#include <values.h>
#pragma hdrstop
#define ESC ((char)27)
#define ENTER ((char)13)
#define BACKSPACE ((char)9)
#define TAB ('\t')
enum bool {false,true};
inline char readkey(){	return (char) bioskey(0);}

void main(){
	unsigned long i=0,current=0;
	unsigned long rate=0,newrate=0;
	int k=0,col=0;
	char s[100]={0};
	textmode(C80);
	for(;;){
		while(!kbhit()){
			textcolor(col=++col%15+1);
			for(k=0;k<80;k++)
				s[k]=random(223)+32;
			cputs(s);
/*			cout<<current<<TAB;
			cout<<rate<<TAB<<newrate<<endl;
*/
			for(i=0;i<current;i++)	if(kbhit()) break;
		}
		char c=readkey();
		switch(c){
			case ESC:exit(0);break;
			case '+':current+=rate;break;
			case '-':current-=rate;break;
			case '*':current*=rate;break;
			case '/':current/=rate;break;
			case ENTER:
				rate=newrate;
				newrate=0;
				break;
			case BACKSPACE:newrate/=10;break;
			default:
				if(isdigit(c)) newrate=newrate*10+c-0x30;
				break;
		}
	}
}