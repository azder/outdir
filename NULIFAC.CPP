#include <fstream.h>
#include <math.h>
void main(){
	long n,i,k,s=0;
	ifstream filein("Nulifac.in",ios::in);
	filein>>n;
	filein.close();
	for(i=1;k=n/long(pow(5,i));i++)
		s+=k;
	ofstream fileout("Nulifac.out");
	fileout<<s;
	fileout.close();
}