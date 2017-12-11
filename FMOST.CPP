#include <fstream.h>
#define MAXV 42
int e[MAXV][MAXV]={0},m1[MAXV]={0};
int l[MAXV]={0},d[MAXV]={0},p[MAXV]={0};
int brn,vn1=0,brl[MAXV]={0},brd[MAXV]={0};

inline int min(int a,int b){
	return a<b?a:b;
}

int gbrr(int vn,int vs,int brl[],int brd[]){
	int vi,vj,vk,vm;
	m1[vs]=1;
	l[vs]=d[vs]=vn1++;
	for(vj=vk=0;vj<vn;vj++){
		if(vj==vs) continue;
		if(e[vs][vj])
			if(!m1[vj]){
				p[vj]=vs;
				vk++;
				gbrr(vn,vj,brl,brd);
				if(l[vj]>d[vs]){
					brl[brn]=vs;
					brd[brn]=vj;
					brn++;
				}
				l[vs]=min(l[vs],d[vj]);
			}else
				if(vj!=p[vs])
					l[vs]=min(l[vs],d[vj]);
	}
	return vk;
}

void gbr(int vn,int brl[],int brd[]){
	brn=0;
	p[0]=-1;
	gbrr(vn,0,brl,brd);
}

void matrixe(){
	ifstream filein("graph.txt",ios::in);
	int i,j,n,t;
	for(i=0;i<42;i++){
		filein>>n;
		for(j=0;j<n;j++){
			filein>>t;
			t--;
			e[i][t]=1;
			e[t][i]=1;
		}
	}
	filein.close();
}

void main(){
	matrixe();
	gbr(42,brl,brd);
	cout<<brn<<endl;
	for(int j=0;j<brn;j++){
		if(brl[j]<brd[j])
			cout<<brl[j]+1<<' '<<brd[j]+1<<endl;
		else
			cout<<brd[j]+1<<' '<<brl[j]+1<<endl;
	}
}