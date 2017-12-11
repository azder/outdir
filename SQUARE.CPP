
/*                                

Problem: 6
Name: Goran Peoski
Email: gpeo@yahoo.com
School: Mirce Acev
Grade: 2001
Age: 18
CityState: Prilep
Country: MKD

*/
#include <fstream.h>
#define WS10 "          "
#define PLUS '+'
#define MINUS '-'
#define VERT '|'
inline long max(long m,long n){
	return ( (m > n) ? m : n);
}
char* getblank(long n,char m[]){
	n=n*2+3;
	for(long i=0;i<n;i++)
		m[i]=' ';
	m[n]=0;
	return m;
}
char* getbr(long n,char m[]){
	n=n*2+2;
	m[0]=PLUS;
	for(long i=1;i<n;i++)
		m[i]=MINUS;
	m[n]=PLUS;
	m[n+1]=0;
	return m;
}
char* getx(long n,char m[]){
	n*=2;
	m[0]=VERT;
	m[1]=MINUS;
	for(long i=1;i<n;i++){
		m[i++]=MINUS;
		m[i]='X';
	}
	m[i++]=MINUS;
	m[i++]=VERT;
	m[i]=0;
	return m;
}
void main(){
	long m=0,n=0,i=0,mx=0;
	char tm[50]={0},tn[50]={0};
	ifstream filein("square.in",ios::in);
	filein>>m>>n;
	filein.close();
	ofstream fileout("square.out",ios::out);
	mx=max(m,n);
	fileout<<getbr(m,tm)<<WS10<<getbr(n,tn)<<endl;
	for(i=1;i<=mx+1;i++){
		if(i<=m)
			fileout<<getx(m,tm);
		else if(i==m+1)
			fileout<<getbr(m,tm);
		else
			fileout<<getblank(m,tm);
		if(i<=n){
			fileout<<WS10;
			fileout<<getx(n,tn);}
		else if(i==n+1){
			fileout<<WS10;
			fileout<<getbr(n,tn);}
		fileout<<endl;
	}
	fileout.close();
}