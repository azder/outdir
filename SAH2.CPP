#include <fstream.h>
#define MAXM 15
#define MAXN 15
int rn,pot[MAXM][MAXN]={0};
int po_x[]={2,1,-1,-2,-2,-1,1,2};
int po_y[]={1,2,2,1-1,-2,-2,-1};
void cont(int m,int n,int cm,int cn,int pn){
	int i,j,k,nm,nn;
	for(i=0;i<8;i++){
		nm=cm+po_x[i];
		nn=cn+po_y[i];
		if((nm<0) || (nm>=m)) continue;
		if((nn<0) || (nm>=n)) continue;
		if(pot[nm][nn]) continue;
		pot[nm][nn]=pn;
		if(pn==m*n){
			rn++;
			stampaj (m,n);
		}else
			cont(m,n,nm,nn,pn+1);
		pot[nm][nn]=0;
	}
}
void main(){

	ifstream filein("sah.in",ios::in);
	filein>>a1>>a2>>b1>>b2;
	filein.close();
	a1|=0x20;
	b1|=0x20;

	a1-=0x60;
	a2-=0x30;
	b1-=0x60;
	b2-=0x30;

	sah(a1,a2,0);
	ofstream fileout("sah.out",ios::out);
	fileout<<nn<<endl;
	fileout.close();

	filein
	cont(m,n,sm,sn,2);
}
