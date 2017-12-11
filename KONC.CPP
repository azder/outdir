#include <fstream.h>
#define MAXSIDE 20
void main(){
	int n,a[MAXSIDE][MAXSIDE]={0};
	int s[MAXSIDE]={0},i,j;
	ifstream filein("konc.in",ios::in);
	filein>>n;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++) filein>>a[i][j];
	filein.close();
	int n2=n/2;
	for(i=0;i<n2;i++){
		for(j=i;j<n-i;j++){
			s[i]+=a[i][j];
			s[i]+=a[n-i-1][j];
		}
		for(j=i+1;j<n-i-1;j++){
			s[i]+=a[j][i];
			s[i]+=a[j][n-i-1];
		}
	}
	if(n%2){
		s[n2]=a[n2][n2];
		n2++;
	}
	ofstream fileout("konc.out",ios::out);
	for(i=0;i<n2;i++)	fileout<<s[i]<<endl;
	fileout.close();
}