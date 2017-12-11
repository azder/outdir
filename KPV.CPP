#include <iostream.h>
#define N 100
int a[N]={0};
void permrek(int n,int k,int i){
	if(i<k){
		permrek(n,k,i+1);
	}else{

	}
}
void main(){
	permrek(5,3,0);
}