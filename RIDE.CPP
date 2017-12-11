/*
ID: gpeo001
PROG: ride
*/

#include <fstream.h>
int main(){
	char s1[100]={0},s2[100]={0};
	long n1=1,n2=1,i=0;

	ifstream fin("ride.in",ios::in);
	fin>>s1>>s2;
	fin.close();

	for(i=0;s1[i];i++)
		n1=(n1*(s1[i]-'@'))%47;
	for(i=0;s2[i];i++)
		n2=(n2*(s2[i]-'@'))%47;

	ofstream fout("ride.out",ios::out);
	if(n1==n2)
		fout<<"GO\n";
	else
		fout<<"STAY\n";
	fout.close();

	return 0;
}