#include <fstream.h>
#define MAXN 35
#define MAXM 1000
inline void inc(int &k,int n){
	k++;
	if(k>n) k=1;
}

inline void dec(int &k,int n){
	k--;
	if(k==0) k=n;
}

void main(){
	int n,n2,a[MAXN][MAXN]={0};
	int b[MAXM]={0},c[MAXM]={0};
	ifstream filein("kvadrat.in");
	filein>>n;
	filein.close();
	n2=n*n;
	int i,j,k=n/2+1,k2;
	for(i=1;i<=n2;i+=n){
		k2=i+n;
		for(j=i;j<k2;j++){
			b[j]=k;
			inc(k,n);
		}
		dec(k,n);

		for(j=i;j<k2;j++)
			c[k2-j+i-1]=b[j];
	}

	for(j=1;j<=n2;j++){
		a[c[j]][b[j]]=j;
	}

	ofstream fileout("kvadrat.out");
	fileout.setf(ios::right);
	for(i=n;i;i--){
		for(j=n;j>1;j--){
			fileout.width(5);
			fileout<<a[i][j];
		}
		fileout.width(5);
		fileout<<a[i][j]<<endl;
	}
	fileout.close();
}