#include <fstream.h>
#include <string.h>
#include <stdlib.h>

int isp(long b){
	char bs[10],cs[10],s[10];
	char ch;
	int l,i,j;
	ltoa(b,bs,10);
	for(i=1;i<=9;i++){
		ltoa(b*i,cs,10);
		l=strlen(bs);
		if (strlen(cs) == l){
			strcpy(s,bs);
			for(j=1;j<l;j++){
				ch=s[l-1];
				s[0]=ch;
				s[1]=0;
				strcat(s,bs);
				s[l]=0;
				if(!strcmp(s,cs)){
					return 1;
				}
			}
		}
	}
	return 0;
}

int main (void){
	int n,k;
	long b;
	ifstream filein("vonzem.in",ios::in);
	ofstream fileout("vonzem.out",ios::out);
	filein>>n;
	for(k=0;k<n;k++){
		filein>>b;
		if(isp(b)) fileout<<b<<endl;
	}
	filein.close();
	fileout.close();
	return 0;
}
