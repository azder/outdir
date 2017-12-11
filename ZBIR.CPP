#include <iostream.h>
#include <string.h>
void main(){
	char n1[502]={0},n2[500]={0};
	char n3[505]={0};
	cout<<"Vnesete go prviot broj:";
	cin.getline(n1,500);
	cout<<"Vnesete go vtoriot broj:";
	cin.getline(n2,500);
	int l1=strlen(n1);
	int l2=strlen(n2);
	int m=l1>l2?l1:l2;
	for(int i=0;i<m;i++){
		n3[i]=
				(n1[l1-i-1]>0?n1[l1-i-1]-0x30:0)+
				(n2[l2-i-1]>0?n2[l2-i-1]-0x30:0);
	}
	for(i=0;i<m;i++){
		n3[i+1]+=n3[i]/10;
		n3[i]%=10;
	}
	if(!n3[i]) i--;
	for(;i+1;i--)
		n3[i]+=0x30;
	strrev(n3);
	cout<<"Zbirot e:"<<n3<<endl;
}