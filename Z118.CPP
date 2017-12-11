/*
judge@uva.es
acm.fi.uva.es
@JUDGE_ID: 7524KW 118 C
@BEGIN_OF_SOURCE_CODE
*/
#include <fcntl.h>
/*#include <sys\stat.h>
//#include <sys\types.h>
//include <io.h>*/
#include <stdio.h>
#define left -1
#define right 1
#define east 2
#define west 4
#define afterwest 5
#define prenorth 0
#define north 1
#define south 3
#define br break
struct field{
	int x;
	int y;
	int or;
};
class robot{
	int x,y,xmx,ymx;
public:
	int lastx,lasty,lost,or;
	void move();
	void turn(char);
	robot(int xm,int ym,int xv=0,int yv=0,int orient=north){
		x=xv;y=yv;
		xmx=xm;ymx=ym;
		lastx=x;lasty=y;
		or=orient;
		lost=0;
	}
};
void robot::turn(char side){
	switch(side){
		case 'L':side=left;br;
		case 'R':side=right;br;
		case 'F':move();return;
	}
	or+=side;
	if(or==prenorth) or=west;
	if(or==afterwest) or=north;
}
void robot::move(){
	switch(or){
		case north:y++;br;
		case east:x++;br;
		case west:x--;br;
		case south:y--;br;
	}
	if ((x<0)||(y<0)||(x>xmx)||(y>ymx)){
		lost=1;
	}else{lastx=x;lasty=y;}
};
void printor(int or){
	switch(or){
		case north: printf("N");br;
		case south: printf("S");br;
		case east: printf("E");br;
		case west: printf("W");br;
	}
}
void main(){
#ifndef ONLINE_JUDGE
	close(0);
	open("myprog.in",O_RDONLY);
	close(1);
	open("myprog.out",O_WRONLY|O_CREAT,0600);
#endif
	int xmax,ymax,counter=0;
	register field w[200];
	scanf("%d%d",&xmax,&ymax);
	int xpos,ypos;
	char or,orders[100];
 //	while(feof(stdin)==0){
	do{
		scanf("%d%d",&xpos,&ypos);
		fgetc(stdin);
		scanf("%c",&or);
		switch(or){
			case 'E':or=east;br;
			case 'S':or=south;br;
			case 'W':or=west;br;
			case 'N':or=north;br;
		}
		register robot robi(xmax,ymax,xpos,ypos,or);
		scanf("%s",orders);
		for(int i=0;(orders[i])&&(0==robi.lost);i++){
			if (orders[i]=='F'){
				int chk=0;
				for(int j=0;j<counter;j++){
					if(w[j].x==robi.lastx&&w[j].y==robi.lasty&&w[j].or==robi.or) chk=1;}
				if(chk==0){robi.move();}
			}else{robi.turn(orders[i]);}
		}
		printf("%d %d ",robi.lastx,robi.lasty);
		printor(robi.or);
		if (robi.lost){
			printf(" LOST\n");
			w[counter].x=robi.lastx;
			w[counter].y=robi.lasty;
			w[counter].or=robi.or;
			counter++;
		}else{
			printf("\n");}
	}while(feof(stdin)==0);
}
/*@BEGIN_OF_SOURCE_CODE*/