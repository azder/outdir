#include <fstream.h>

inline long max(long a,long b){
	return ((a>b)?a:b);
}
inline long min(long a,long b){
	return ((a<b)?a:b);
}

void main(){
	long n1,n2,m;
	ifstream filein("pravoag.in",ios::in);
	filein>>n1>>n2;
	filein.close();
	long a=max(n1,n2);
	long b=min(n1,n2);
	while(b>0){
		m=a%b;
		a=b;
		b=m;
	}
	ofstream fileout("pravoag.out",ios::out);
	m=n1+n2-a;
	fileout<<m;
	fileout.close();
}