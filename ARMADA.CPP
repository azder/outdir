#include <fstream.h>
struct avion{
	int poseten;
	int avioni[50];
};

avion a[50];
int max=0;
void rec(avion &av,int m){
	av.poseten=1;
	m++;
	if(m>max) max=m;
	int i=0;
	while(av.avioni[i]){
		if(!a[av.avioni[i]].poseten)
			rec(a[av.avioni[i]],m);
		i++;
	}
}

void main(){
	int n=0,g=0,i,j,tmp;
	ifstream filein("Armada.in",ios::in);
	filein>>n;
	filein>>g;
	for(i=1;i<=n;i++){
		j=0;
		do{
			filein>>tmp;
			a[i].avioni[j++]=tmp;
		}while(tmp!=0);
	}
	filein.close();
	rec(a[g],-1);
	ofstream fileout("Armada.out",ios::out);
	fileout<<max*3;
	fileout.close();
}