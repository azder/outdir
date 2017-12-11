#include <conio.h>
#include <iostream.h>
#include <graphics.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

int inarr(int n1[4],int n2){
	int i,in=0;
	for(i=0;i<4;i++)
		if(n1[i]==n2) in=1;
	return in;
}
void gennum(int n1[4]){
	 int n2;
	 time_t t;
	 srand((unsigned) time(&t));
	 for(int i=0; i<4;){
		n1[i]=0;
		n2=(rand()%9)+1;
		if(inarr(n1,n2)) continue;
		n1[i]=n2;
		i++;
	 }
}

inline void printpeo()
{
	cout <<"Permutations Game by Peo (TM)\n";
	cout <<"Copyright (C) Peo Corp.\n";
}
inline void setscreen(){
	_setcursortype(_NOCURSOR);
	textmode(C80);
	textbackground(12);
	textcolor(15);
	clrscr();
}
void check(int n1[],int n2[],char chk[4]){
	int i,j,t=0,p=0;
	for(i=0;i<4;i++)
		chk[i]=0;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++)
			if(n1[i]==n2[j]) t++;
	}
	for(i=0;i<4;i++)
		if(n1[i]==n2[i]){
			p++;
			t--;
		}
	for(i=0;i<p;i++)
		chk[i]='+';
	for(i=p,j=0;j<t;i++,j++)
		chk[i]='.';
	chk[++i]=0;
}

void main(){
	setscreen();
	char chk[4],tmp;
	int n1[4]={0},n2[4]={0},tmpi;
	printpeo();
	do{
		cout<<"Number Generated"<<endl;
		int counter=0;
		gennum(n1);
		do{
			char ch;
			cout<<"("<<++counter<<") ";
			for(int i=0;i<4;){
				ch=getch();
				switch(ch){
				case 27:
					exit(0);
					break;
				case 8:
					if(i>0){
						n2[i--]=0;
						putch(8);
						putch(0x20);
						putch(8);
					}
					break;
				case'+':
					break;
					cout<<'\r';
					cout<<"("<<counter<<") ";
					for(tmpi=0;tmpi<4;tmpi++){
						cout<<n1[tmpi];
					}
					i=4;
					break;
				default:
					if(isdigit(ch) && !inarr(n2,ch-0x30)){
						putch(ch);
						n2[i++]=ch-0x30;
					}
				}
			}
			check(n1,n2,chk);
			cout<<" "<<chk<<endl;
			for(tmpi=0;tmpi<4;tmpi++)
				n2[tmpi]=0;
		}while(chk[3]!='+');
		cout<<"Play another?(Y/N)";
		tmp=getche();
		cout<<endl;
	}while((tmp | 0x20)!=('n'));
}