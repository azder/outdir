/*
	Site najgolemi pravoagolnici sto ne se preklopuvaat
*/
#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#define CRNO 1
#define BELO 0
#define CRVENO 2
#define MAXMAT 10
int mat[MAXMAT][MAXMAT];/*={{1,0,0,0,1},{0,0,0,0,0}
												,{0,0,1,0,0},{1,0,0,0,1},
												{0,0,1,0,0},{0,0,0,0,0}};*/
inline int p(int x1,int y1,int x2,int y2){
	return (x2-x1)*(y2-y1);
}
inline int sporedi(int ax1,int ay1,int ax2,int ay2
									,int bx1,int by1,int bx2,int by2){
	if(p(ax1,ay1,ax2,ay2)>p(ax1,ay1,ax2,ay2))
		return -1;
	else if (p(ax1,ay1,ax2,ay2)<p(ax1,ay1,ax2,ay2))
		return 1;
	return 0;
}
void genmat(int m,int n){
	int i,j;
	randomize();
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			mat[i][j]=random(2);
}
int proveri(int x1,int y1,int x2, int y2){
	int i,j;
	for(i=x1;i<=x2;i++)
		if(mat[i][y1]!=BELO || mat[i][y2]!=BELO) return 0;
	for(j=y1+1;j<=y2-1;j++)
		if(mat[x1][j]!=BELO || mat[x2][j]!=BELO) return 0;
	return 1;
}
void oznaci(int x1,int y1,int x2, int y2){
	int i,j;
	for(i=x1;i<=x2;i++)
		for(j=y1;j<=y2;j++)
			mat[i][j]=CRVENO;
}
void main(){
	int m,n,broj=0,i,j;
	int x1,x2,y1,y2,np,ima=1;
	int sx1,sx2,sy1,sy2,sp;
	cout<<"Kolku strani ima matricata?\n";
	m=5,n=6;
	cin>>m>>n;
	genmat(m,n);
	while(ima){
		ima=0;
		int sx1=0,sx2=0,sy1=0,sy2=0,sp=0;
		for(x1=0;x1<n-1;x1++){
			for(y1=0;y1<m-1;y1++){
				if(mat[x1][y1]!=BELO) continue;
				for(x2=x1+1;x2<n;x2++){
					for(y2=y1+1;y2<m;y2++){
						if(mat[x1][y1]!=BELO
							|| 0==proveri(x1,y1,x2,y2)) break;
						np=p(x1,y1,x2,y2);
						if (np>sp){
							sx1=x1;
							sy1=y1;
							sx2=x2;
							sy2=y2;
							sp=np;
							ima=1;
						}
					}
				}
			}
		}
		if(ima) broj++;
		oznaci(sx1,sy1,sx2,sy2);
	}
	cout<<"Mozat da se formiraat "<<broj<<" pravoagolnici.\n";
	getch();
}