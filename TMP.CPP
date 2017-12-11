#include <string.h>

char* decto(long broj,long sys,char str[40]){
	long n,i;
	for(i=0,n=br;n;i++){
		str[i]=n%s;
		n/=s;
	}
	for(int n=0;n<i;n++){
		if(str[n]>9) str[n]+=('A'-10);
		else str[n]+=0x30;
	}
	strrev(str);
}