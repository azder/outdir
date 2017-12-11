#include <fstream.h>
#include <stdlib.h>
struct igrac{
	int vis;
	char ime[100];
};
int sort(const void *v1,const void *v2){
	int a=*(int*)v1;
	int b=*(int*)v2;
	return a>b?1:-1;
}
void main(){
	unsigned long n,i,m;
	ifstream filein("Tim.in",ios::in);
	filein>>n;
	igrac *a=new igrac[n];
	for(i=0;i<n;i++)
		filein>>a[i].ime>>a[i].vis;
	filein>>m;
	filein.close();
	qsort(a,n,sizeof(a[1]),sort);
	ofstream fileout("Tim.out",ios::out);
	fileout<<a[--m].ime;
	fileout.close();

}