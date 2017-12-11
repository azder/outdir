#include <iostream.h>
#include <string.h>
void smeni(char str[],int l){
	for(int i=0;i<l;i++)
		if(str[i]>9){
			str[i]+=('A'-10);
		}else{
			str[i]+=0x30;
		}
		strrev(str);
}
void main(){
	unsigned long br,s,n,i;
	char str[20]={0};
	cout<<"Vnesete broj:";
	cin>>br;
	cout<<"Vnesete broen sistem:";
	cin>>s;
	if(s<2 || s>36) return;
	for(i=0,n=br;n;i++){
		str[i]=n%s;
		n/=s;
	}
	smeni(str,i);
	cout<<"Vneseniot broj e:"<<br<<endl;
	cout<<"Brojniot sistem e:"<<s<<endl;
	cout<<"Brojot e:"<<str<<endl;
}