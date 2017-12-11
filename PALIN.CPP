#include <fstream.h>
#define MAXN 5010
char s[MAXN]={0};
char s1[MAXN]={0};
char s2[MAXN]={0};

int main(){
	int n=0;
	ifstream filein("palin.in",ios::in);
	filein>>n;
	filein>>s;
	filein.close();
	return 0;
}