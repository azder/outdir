#include <iostream.h>
void main(){
	char i,j,b,a[100];
	for(i=0;i<10;i++)	cin>>a[i];
	for(i=0;i<3;i++){
		b=a[9];
		for(j=9;j>0;j--) a[j]=a[j-1];
		a[0]=b;
	}
	for(i=0;i<10;i++) cout<<a[i];
	cout<<endl;
}