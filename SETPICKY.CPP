#include <fstream.h>
#include <stdlib.h>
void main(){
	ofstream fileout("picky.in",ios::out);
	for(int i=0;i<100;i++)
		fileout<<char('A'+random(3));
	fileout<<endl;
	fileout.close();
}