/*
Prog: base
Lang: C++
*/

#include <fstream.h>
#include <string.h>
#include <stdlib.h>

inline int ispal(long broj,int sys){
	char a[50],b[50];
	ltoa(broj,a,sys);
	strcpy(b,a);
	strrev(b);
	return !strcmp(a,b);
}

int main(){
	unsigned int st,sp,bst,bsp;
	unsigned int i,j,num=0,is;
	long n;
	ifstream filein("base.in",ios::in);
	filein>>st>>sp>>bst>>bsp;
	filein.close();

	for(i=st;i<=sp;i++){
		n=i*i;
		for(j=bst,is=0;j<=bsp && is<=1;j++)
			if(ispal(n,j)) is++;
		if(is==1) num++;
	}

	ofstream fileout("base.out",ios::out);
	fileout<<num<<endl;
	fileout.close();
	return 0;
}