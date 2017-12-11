#include <iostream.h>
void main(){
	int n,i,j,c,a[100];
	cin>>n;
	for(i=0;i<n;i++) cin>>a[i];
	for(j=0;j<n;j++){
		for(i=j+1;i<n;i++){
			if(a[j]>a[i]){
				c=a[j];
				a[j]=a[i];
				a[i]=c;
			}
		}
	}
	for(i=0;i<n;i++) cout<<a[i]<<' ';
	cout<<endl;
}