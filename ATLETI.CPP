#include <stdlib.h>
#include <fstream.h>
int smaller(const void* v1,const void* v2){
	int a=*(int*)v1;
	int b=*(int*)v2;
	if(a>b)
		return -1;
	else if (a<b)
		return 1;
	else
		return 0;
}

void main(){
	int n=0,m=0;
	ifstream filein;
	filein.open("atleti.in",ios::in);
	filein>>n>>m;
	int *a=new int[n];
	for(int i=0;i<n;i++)
		filein>>a[i];
	filein.close();
	qsort(a,n,sizeof(int),smaller);
	ofstream fileout("atleti.out",ios::out);
	fileout<<a[m];
	fileout.close();
}