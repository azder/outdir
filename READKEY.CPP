#include <bios.h>
#include <conio.h>
#include <iostream.h>
#include <stdlib.h>
#include <windows.h>
#define ESC ((char)27)
#define TAB ('\t')
enum bool {false,true};
inline char readkey(){
	char c=bioskey(0);
	if(c) return c;
	c=bioskey(0);
	cout<<int(c)<<endl;
	return c;
}
inline bool keypress(){return (bool) bioskey(1);}
void main(){
	DWORD c;
	for(;(char)c!=ESC;){
		c=getche();
		if(!c) c=getche();
/*		c=bioskey(0);
		if((char)c){
			cout<<(char)c<<" (";
			cout<<(int)(char)c<<")"<<endl;
		}
		else{
			cout<<"(0) "<<(char)HIBYTE(c);
			cout<<" ("<<(int)HIBYTE(c)<<")"<<endl;
		}
*/
	}
}