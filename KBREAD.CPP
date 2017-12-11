#include <iostream.h>
void main(){
	char cah,cal;
	do{
		asm{
			mov ah,0x10;
//			mov ah,0x0;
			int  0x16;
			mov cah,ah;
			mov cal,al;
		}
		cout<<(int)cal<<'\t'<<(int)cah<<endl;
	}while(cal!=27);
}