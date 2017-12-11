/*
Prog: tri
Lang: C++
*/

#include <fstream.h>
int main(){
	int n,i,j;
	ifstream filein("tri.in",ios::in);
	filein>>n;/* 1 to 20 */
	filein.close();
	ofstream fileout("tri.out",ios::out);
	for(i=1;i<=n;i++){
		for(j=i;j<i*2-1;j++){
			fileout<<j%10;
		}
		for(j=i*2-1;j>=i;j--){
			fileout<<j%10;
		}
		fileout<<endl;
	}
	fileout.close();
	return 0;
}