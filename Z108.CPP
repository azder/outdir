/*@JUDGE_ID: 7524KW 108 C*/
/*@BEGIN_OF_SOURCE_CODE*/
#include <fcntl.h>
#include <io.h>
#include <stdio.h>
struct corners{
	int x1;
	int x2;
	int y1;
	int y2;
};
int checkmatrix(register int a[][100],register int b){
	register corners c;
	register int max=0,m=0,i=0,j=0;
	max=a[0][0]+a[0][1]+a[1][0]+a[1][1];
	for(c.x1=0;c.x1<b-1;c.x1++){
		for(c.x2=c.x1+1;c.x2<b;c.x2++){
			for(c.y1=0;c.y1<b-1;c.y1++){
				for(c.y2=c.y1+1;c.y2<b;c.y2++){
					for(i=c.x1;i<=c.x2;i++){
						for(j=c.y1;j<=c.y2;j++){
						m+=a[i][j];
						}
					}
				if(m>max) max=m;
				m=0;
				}
			}
		}
	}
	return max;
}
void main(){
#ifndef ONLINE_JUDGE
	close(0);
	open("myprog.in",O_RDONLY);
	close(1);
	open("myprog.out",O_WRONLY|O_CREAT,0600);
#endif
	register int a[100][100],b=0,i=0,j=0;
	scanf("%d",&b);
	for(i=0;i<b;i++){
		for (j=0;j<b;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("%d",checkmatrix(a,b));
}
/*@END_OF_SOURCE_CODE*/