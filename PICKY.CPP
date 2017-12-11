/*
Prog: picky
Lang: C++
*/

#include <fstream.h>
#include <string.h>

int num=0;
char n[111]={0};
inline void rep(char &i,char &j){
	char c=i;
	i=j;
	j=c;
	if(i!=j) num++;
}

void quick(int l,int r,char n[]){
	char k=(n[l]+n[r])/2;
	int i=l,j=r;
	do{
		while(n[i]<k) i++;
		while(n[j]>k) j--;
		if(i<=j) rep(n[i++],n[j--]);
	}while(i<=j);
	if(l<j) quick(l,j,n);
	if(r>i) quick(i,r,n);
}

int main(){
	ifstream filein("picky.in",ios::in);
	filein.getline(n,105);
	filein.close();
	quick(0,strlen(n)-1,n);
	ofstream fileout("picky.out",ios::out);
	fileout<<num<<endl;
	fileout.close();
	return 0;
}