/*
ID: gpeo001
PROG: gift1
*/

#include <fstream.h>
#include <string.h>
void printall();

struct person{
	long start,n,end,minus;
	char name[15];
	char f[10][15];
};

person a[10]={0};
long n=0;

void input(){
	long i=0,j=0,k=0;
	char tmpname[15]="";
	person *p;
	ifstream fin("gift1.in",ios::in);
	fin>>n;
	for(i=0;i<n;i++) fin>>a[i].name;
	for(i=0;i<n;i++){
		fin>>tmpname;
		getpers(p,tmpname);
		fin>>p->start>>p->n;
			for(k=0;k<p->n;k++)
				fin>>p->f[k];
	fin.close();
}
void getpers(person &p,char *name){
	long i=0;
	for(i=0;i<n;i++)
		if(!strcmp(a[i].name,name))
			return a[i];
};
void solve(){
	long i=0,j=0,tmp=0;
	for(i=0;i<n;i++){
		tmp=a[i].start/a[i].n;
		a[i].start-=a[i].n*tmp;
		for(j=0;j<a[i].n;j++)
			if();
	}
}

void main(){
	input();
	solve();
}

void printall(){
	cout<<endl;
	for(int i=0;i<5;i++){
		cout<<a[i].name<<'\t';
		cout<<a[i].start<<'\t';
		cout<<a[i].end<<'\t';
		cout<<a[i].n<<'\t';
			for(int j=0;j<a[i].n;j++)
				cout<<a[i].f[j]<<'\t';
		cout<<endl;
	}
}
