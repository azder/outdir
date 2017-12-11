#include <fstream.h>
void main(){
	ofstream fout("c:\\windows\\desktop\\chars.txt",ios::out);
	for(char i=0;i<255;i++) fout<<i;
	fout.close();
}