#include <fstream.h>
//#include <iostream.h>
void main(){
	ifstream file;
	file.open("paskal.in",ios::in);
	char *text;
	file>>text;
	cout <<file<<endl;
	cout<<text<<endl;
	file.close();
}