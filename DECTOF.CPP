#include <string.h>

char* decto(long broj,long sys,char str[40]){
	long n,i;
	for(i=0,n=broj;n;i++){
		str[i]=n%sys;
		n/=sys;
	}
	for(n=0;n<i;n++){
		if(str[n]>9) str[n]+=('A'-10);
		else str[n]+=0x30;
	}
	str[i]=0;
	strrev(str);
	return str;
}
#include <iostream.h>
void main(){
	char s[40];
	cout<<decto(16*16,11,s)<<endl;
}