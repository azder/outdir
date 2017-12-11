#include <iostream.h>
//#include <ctype.h>
//#include <conio.h>

int main(){
	int a=-1;
	do{
		cout<<"Choose:\n";
		cout<<"\t0 - None\n";
		cout<<"\t1 - Mouse\n";
		cout<<"\t2 - KeyMouse\n";
		cin>>a;
//		cout<<"Char:"<<a<<endl;
	}while(a<0 || a>2);
	return a;
}