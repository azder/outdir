#include <fstream.h>
#define MAXN 110
unsigned int b[MAXN]={0},q[MAXN]={0};
unsigned int z[MAXN]={0},n=0,m=0,s=0;
void readin();

int main(){
	int	k=0,i;
	readin();
	for(i=0;i<n;i++){
		q[0]=0;
	}
	return 0;
}

void readin(){
	ifstream filein("bogati.in",ios::in);
	unsigned int tmp=0;
	while(!filein.eof()){
		filein>>tmp;
		if(tmp) s+=z[n++][0]=tmp;
		tmp=0;
	}
	m=s/2;
	filein.close();
}