#include <fstream.h>
void zapisi(int denovi){
	ofstream fileout("Polzav.out",ios::out);
	if(denovi<0)
		fileout<<"NE";
	else
		fileout<<denovi;
	fileout.close();
}
void main(){
	int n,k,l,i,v=0;
	ifstream filein("Polzav.in",ios::in);
	filein>>n>>k>>l;
	if(k<=l){
		zapisi(-1);
		return;
	}
	for(i=0;v<n;i++){
		v+=k;
		if(v<n) v-=l;
	}
	zapisi(i);
	filein.close();
}