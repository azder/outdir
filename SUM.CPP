/*
Prog: sum
Lang: C++
*/
#include <fstream.h>
long n,num=0;
void sum(long i,long s){
	i++;
	if(i<n){
/*		if(i>1)*/ sum(i,s+i);
		sum(i,s-i);
	}else
		if(s==n)num++;
}

int main(){
	ifstream filein("sum.in",ios::in);
	filein>>n;
	filein.close();
	sum(1,-1);
	ofstream fileout("sum.out",ios::in);
	fileout<<num<<endl;
	fileout.close();
	return 0;
}