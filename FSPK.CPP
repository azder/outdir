#include <fstream.h>
#define MAXV 42

int e[MAXV][MAXV];

inline int min(int a,int b){
	return a<b?a:b;
}

void matrixe(){
	ifstream filein("graph.txt",ios::in);
	int i,j,n,t;
	for(i=0;i<MAXV;i++){
		filein>>n;
		for(j=0;j<n;j++){
			filein>>t;
			t--;
			e[i][t]=1;
			e[t][i]=1;
		}
	}
	filein.close();
}

void main(){
	matrixe();
}