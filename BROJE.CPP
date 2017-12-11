#include <iostream.h>

void main(){
	int i;
	float e, tocnost, clen;
	cout << "\n Vnesi ja tocnosta na presmetuvaje: ";
	cin >> tocnost ;
	e=1;
	i=1;
	clen=1;
	do{
		clen=clen/i;
		e=e+clen;
		i=i+1;
	}while (clen>=tocnost);
	cout.precision(i);
	cout << "\n Brojot e so tocnost "<< cout.precision() << " iznesuva "<<e << endl;
}



