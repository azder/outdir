#include <fstream.h>
long s=0,n=0;
long a[100][100]={0};
void zbir(long tmp,long i,long j){
	if(i<n){
		tmp+=a[i][j];
		zbir(tmp,++i,j);
		zbir(tmp,i,++j);
	}else if(s<tmp) s=tmp;
}
void main(){
	long i,j;
	ifstream filein("Triag.in",ios::in);
	filein>>n;
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			filein>>a[i][j];}
	}
	filein.close();
	zbir(0,0,0);
	ofstream fileout("Triag.out",ios::out);
	fileout<<s;
	fileout.close();
}