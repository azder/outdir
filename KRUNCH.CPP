
/*                                

Problem: 5
Name: Goran Peoski
Email: gpeo@yahoo.com
School: Mirce Acev
Grade: 2001
Age: 18
CityState: Prilep
Country: MKD

*/                        

#include <fstream.h>
#include <string.h>
int check(char str){
	switch(str){
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
		return 1;
	default:
		return 0;
	}
}
void main(){
	char str[80]={0},str2[80]={0};
	long i=0,j=0;
	ifstream filein("krunch.in",ios::in);
	filein.getline(str,80);
	filein.close();
	for(i=0;i<strlen(str)+1;i++){
		if(check(str[i])) continue;
		if(str2[j-1]==32 && str[i]==32) continue;
		str2[j++]=str[i];
	}
	ofstream fileout("krunch.out",ios::out);
	fileout<<str2;
	fileout.close();
}