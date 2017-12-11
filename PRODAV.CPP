#include <fstream.h>
#include <iomanip.h>
void main(){
	ifstream filein("Prodav.in",ios::in);
	long n,i;
	filein>>n;
	double *a=new double[n];
	for(i=0;i<n;i++)
		filein>>a[i];
	filein.close();
	ofstream fileout("Prodav.out",ios::out);
	double sum=0;
	for(i=0;i<n;i++)
		sum+=a[i];
	fileout.setf(ios::fixed);
	fileout<<setprecision(3)<<sum/n;
	fileout.close();
}