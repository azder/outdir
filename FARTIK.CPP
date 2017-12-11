#include <fstream.h>
#define MAXV 42

int e[MAXV][MAXV]={0},apn=0,ap[MAXV]={0};
int vn1=0,m1[MAXV]={0};
inline int min(int a,int b){
	return a<b?a:b;
}

int gapr(int vn,int vs
		,int d[],int l[],int p[]){
	int vi,vj,vk,vl,vm;
	m1[vs]=1;
	l[vs]=d[vs]=vn1++;
	for(vj=vk=vl=0;vj<vn;vj++){
		if(vj==vs) continue;
		if(e[vs][vj])
			if(!m1[vj]){
				p[vj]=vs;
				vk++;
				gapr(vn,vj,d,l,p);
				if((p[vs]!=-1) && !vl && (l[vj]>=d[vs])){
					ap[apn++]=vs;
					vl++;
				}
				l[vs]=min(l[vs],l[vj]);
			}else
				if(vj!=p[vs]) l[vs]=min(l[vs],d[vs]);
		}
		return vk;
}

void gap(int vn){
	int vs;
	int d[MAXV],l[MAXV],p[MAXV];
//	for(vs=0;vs<vn,m1[vs++]=0);
	apn=0;
	p[0]=-1;
	if(gapr(vn,0,d,l,p) != 1 ) ap[apn++]=0;
}

void main(){
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
	gap(42);
	cout<<apn<<endl;
	for(i=0;i<apn;i++)
		cout<<ap[i]+1<<'\t';
	cout<<endl;
}