#include <iostream.h>
#include <fstream.h>
#include <conio.h>
void main(){
	char *filename;
	ifstream f;
	cin >>filename;
	f.open(filename,ios::in);
	if(!f){
		cout<<"Error opening file: "<<filename<<endl;
		return;
	}
	char a;
	int i;
	while(!f.eof()){
		a=f.get();
		if(a=='\n') i++;
		if(!(i%24)) getch();
		cout<<a;
	}
	f.close();
}