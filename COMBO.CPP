/*
Prog: combo
Lang: C++
*/
#include <fstream.h>
#include <stdio.h>
int main(){
	long n=0,i,j,s;
	ifstream filein("combo.in",ios::in);
	filein>>n;
	filein.close();
	ofstream fileout("combo.out",ios::out);
/*	FILE *fileout;
	fileout=fopen("combo.out","wt");*/
	for(i=1;i<n/2;i++){
		for(j=i,s=0;s<n;j++)	s+=j;
		if(s==n)
			fileout<<i<<' '<<j-1<<endl;
/*			fprintf(fileout,"%d %d\n",i,j-1);*/
	}
	fileout.close();
/*	fclose(fileout);*/
	return 0;
}