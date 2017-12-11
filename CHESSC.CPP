#include <iostream.h>
#include <conio.h>
void main(){
	double p=1;
	clrscr();
	for (int i=33;(i<=64)&&(getch()!=13);i++){
		p*=i;
		cout<<i<<'\t'<<p<<endl;}
	getch();
}