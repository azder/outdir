#include <iostream.h>
#include <conio.h>
#define ESC '\x1b'
#define TAB '\t'
void main(){
	char c,c2;
	while(!kbhit() && ESC!=(c=getch())){
		if(!c) c2=getch();
		else c2=0;
		cout<<(int)c<<TAB<<(int)c2<<endl;
 }
}