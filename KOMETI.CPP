#include <fstream.h>
#include <math.h>
int mod(char str[]){
	double m=1;
	for(int i=0;str[i];i++)
		m*=(str[i]-64);
		return int(fmod(m,47));
}
void main(){
	char grupa[50],kometa[50];
	ifstream filein("comet.in",ios::in);
	filein>>grupa>>kometa;
	filein.close();
	ofstream fileout("comet.out",ios::out);
	if(mod(grupa)==mod(kometa))
		fileout<<"TRGNI";
	else
		fileout<<"STOJ";
	fileout.close();
}