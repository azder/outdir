
/*                                

Problem: 9
Name: Goran Peoski
Email: gpeo@yahoo.com
School: Mirce Acev
Grade: 2001
Age: 18
CityState: Prilep
Country: MKD

*/                        

#include <fstream.h>
void main(){
	long i=0,n=0,num=0,tmp=0,max=0;
	ifstream filein("ice.in",ios::in);
	filein>>n;
	for(i=0;i<n;i++){
		filein>>tmp;
		if(tmp%2)
			num=0;
		else
			num++;
		if(max<num) max=num;
	}
	filein.close();
	ofstream fileout("ice.out",ios::out);
	fileout<<max;
	fileout.close();
}