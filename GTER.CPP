#include <fstream.h>
void main(){
	ifstream filein("graph.ter",ios::in);
	ofstream fileout("graph.out",ios::out);
	int i,j;
	char n,m;
	for(i=0;i<42;i++){
		filein>>n;
		n-=32;
		fileout<<int(n)<<char(32);
		for(j=0;j<n;j++){
			filein>>m;
			fileout<<int(m-32)<<char(32);
		}
		fileout<<endl;
	}
	fileout.close();
	filein.close();
}