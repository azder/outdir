#include <iostream.h>

class a{
public:
	int n;
	void pecati(){
		cout<<n<<endl;
	};
	a operator+(a y){
		a z;
		z.n=n+y.n;
	return z;
}
};

void main(){
	a x,y,z;
	x.n=7;y.n=2;
	z=x+y;
	z.pecati();
}
