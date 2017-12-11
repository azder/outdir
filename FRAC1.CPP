#include <complex.h>
#include <iostream.h>
inline complex fc(complex z,complex c){
	return pow(z,2)+c;
}
void main(){
	complex z=complex(1,5);
	complex c=complex(0,0);
	cout<<fc(fc(z,c),c);

}