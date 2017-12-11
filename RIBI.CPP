#include <fstream.h>
#include <stdlib.h>

struct riba{
	unsigned int tezina;
	unsigned int broj;
};

void bsort(riba a[],unsigned int n){
	unsigned int i,j,l=1;
	riba k;
	for(i=n-1;(l==1) && (i>0);i--){
		for(j=l=0;j<i;j++)
			if(a[j].tezina<a[j+1].tezina){
				k=a[j];
				a[j]=a[j+1];
				a[j+1]=k;
				l=1;
			}
	}
}

void main(){
	riba a[1000]={0};
	unsigned int n=0,i,j,tezina,k=0;
	ifstream filein("Ribi.in",ios::in);
	filein>>n;
	for(i=0;i<n;i++){
		filein>>tezina;
		for(j=0;j<=k;j++){
			if(a[j].tezina==tezina){
					a[j].tezina=tezina;
					a[j].broj++;
					break;
			}else if(a[j].tezina==0){
					a[j].tezina=tezina;
					a[j].broj++;
					k++;
					break;
			}
		}
	}
	filein.close();
	bsort(a,k);
	unsigned int r1=0,r2=0,l;
	for(i=0;i<k;i++){
		for(j=0;j<a[i].broj;j++){
			if(r2<r1)
				r2+=a[i].tezina;
			else
				r1+=a[i].tezina;
		}
	}
	ofstream fileout("ribi.out",ios::out);
	if(r2<r1){
		l=1;
		fileout<<r1<<' '<<r2<<endl;
	}else{
		l=0;
		fileout<<r2<<' '<<r1<<endl;
	}
	r1=r2=0;
	for(i=0;i<k;i++){
		for(j=0;j<a[i].broj;j++){
			if(r2<r1){
				r2+=a[i].tezina;
				if(l) fileout<<a[i].tezina<<endl;
			}else{
				r1+=a[i].tezina;
				if(!l) fileout<<a[i].tezina<<endl;
			}
		}
	}
	fileout.close();
}