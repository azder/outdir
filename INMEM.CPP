#include <iostream.h>
#include <conio.h>
extern long c;
void main(){
	long *a;
	clrscr();
	a=(long*)c;
	for(long i=0;i<24;i++)
		cout<<hex<<(long)a<<" + "<<hex<<i
				<<'\t'<<hex<<(char)a[i]<<endl;
}
long c=10000;