#include <iostream.h>
class a{
public:
	int b,c;
	int cb,cc;
	int mutable mb,mc;
	void f(){
		b=c;
	};
	void ff()const{
		mb=c;
	};
	int operator[](int i){
		switch(i){
			case 1:return b;
			case 2:return c;
			default:return b;
		}
	}
};

void main(){
	a test[4];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>test[i].b;
	cout<<test[0][1];
}