#include <fstream.h>
#include <string.h>
#include <stdlib.h>

void main(){
	char num[100];
	ifstream filein("Igra.in",ios::in);
	filein>>num;
	filein.close();
	int p=strlen(num);
	int n=atoi(&num[p--]);
	ofstream fileout("Igra.out",ios::out);
	if(n%=5)
		fileout<<"PRV"<<endl<<n;
	else
		fileout<<"VTOR";
	fileout.close();
}