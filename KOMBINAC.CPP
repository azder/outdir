#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <conio.h>

int inarr(int n1[4],int n2){
	int i,in=0;
	for(i=0;i<4;i++)
		if(n1[i]==n2) in=1;
	return in;
}
void gennum(int n1[4]){
	 int n2,i;
	 time_t t;
	 srand((unsigned) time(&t));
	 for(i=0; i<4;){
		n1[i]=0;
		n2=rand()%9+1;
		if(inarr(n1,n2)) continue;
		n1[i]=n2;
		i++;
	 }
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
	char chk[4],tmp,ch;
	int n1[4]={0},n2[4]={0},tmpi;
	int counter,i;
	printf("Created by Magic Programs Group\n");
	printf("in associacion with Peo Corp.\n");
	do{
		printf("Generiran e broj\n");
		printf("Pogodi koj\n");
		counter=0;
		gennum(n1);
		do{
			ch;
			counter++;
			printf("(%d)",counter);
			for(i=0;i<4;){
				ch=getch();
				switch(ch){
				case 27:
					printf("\n");
					exit(0);
					break;
				case 8:
					if(i>0){
						n2[--i]=0;
						putch(8);
						putch(0x20);
						putch(8);
					}
					break;
				default:
					if(isdigit(ch) && !inarr(n2,ch-0x30)){
						putch(ch);
						n2[i++]=ch-0x30;
					}
				}
			}
			check(n1,n2,chk);
			printf(" %s\n",chk);
			for(tmpi=0;tmpi<4;tmpi++)
				n2[tmpi]=0;
		}while(chk[3]!='+');
		printf("Uste edna?(D/N)");
		tmp=getch();
		printf("\n");
		if(tmp==27) exit(0);
	}while((tmp | 0x20)!=('n'));
}