#include <iostream.h>
#include <conio.h>
int checkn(const int j,const int n){
	int i=0,m=0,off=0,num=0;
	for (i=1;i<=n;i++){
		num=2*n-i+1;
		m=(j+off)%num+i;
		off=m;
		if (m<=n) return 0;
	}
	return 1;
}
void main(){
	int n=0;
	clrscr();
	cin>>n;
	int i=n+1;
	while (0==checkn(i,n)) i++;
	cout<<i<<endl;
	getch();
}