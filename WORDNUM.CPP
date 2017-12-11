#include <fstream.h>
#include <string.h>
void main(){
	char broj[100]={0};
	ifstream filein("WordNum.in",ios::in);
	filein.getline(broj,100);
	filein.close();
}