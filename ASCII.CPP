#include <iostream.h>
#include <conio.h>
void main(){
	clrscr();
	for(unsigned char a=0;a<255;a++)
		if(a!=26) cout<<hex<<int(a)<<"-"<<a<<"\t";
}