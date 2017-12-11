#include <fstream.h>
#include <math.h>
#include <iomanip.h>
double fact(int num){
	double f=1,a;
	for(int i=1;i<=num;i++){
		f*=i;
//		modf(f,&a);
//		f=a;
	}
	return f;
}

void main(){
	int n,m;
	ifstream filein("Cvece.in",ios::in);
	filein>>n>>m;
	filein.close();
	ofstream fileout("Cvece.out",ios::out);
	fileout.setf(ios::fixed );
	fileout.unsetf(ios::showpoint);
	double irez, rez=(fact(n+m-2) /( fact(n-1)*fact(m-1)));
	modf(rez,&irez);
  fileout<<setprecision(1);
	fileout<<irez;
	fileout.close();
}