#include <conio.h>
#include <iostream.h>
int iscorrect(char c){
	if((c>31) || (c<126)){
		return 1;
	}else{
		return 0;
	}
}
void main(){
	 char a,ime[255];
	 int i;
	 clrscr();
	 cout<<"Koe e vaseto ceneto ime?\n";
	 a=getch();
	 for(i=0;iscorrect(a);i++){
		putch(a);
//		ime[i]=a;
		a=getch();
	 }
	 cout <<ime<<endl;
}
