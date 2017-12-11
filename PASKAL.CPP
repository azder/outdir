#include <fstream.h>
#include <iostream.h>

void main(){
	int n,i,j;
	long a[31]={1},tmp1,tmp2;
	ifstream filein("Paskal.in",ios::in);
	filein>>n;
	filein.close();
	ofstream fileout("Paskal.out",ios::out);
	for(i=1;i<=n+1;i++){
		tmp2=1;
		fileout<<1<<' ';
		for(j=1;j<i;j++){
			tmp1=a[j];
			a[j]+=tmp2;
			tmp2=tmp1;
			fileout<<a[j]<<' ';
		}
		fileout<<endl;
	}
	fileout.close();
}