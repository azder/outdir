/*
priblizen koren na
ravenka od n-ti stepen
(an*x^n+an-1*x^n-1+...+a1*x+a0=0)
so tocnost e

*/
#include <iostream.h>
#include <math.h>
#define MAX_KOEF 100

long n=0,a[MAX_KOEF]={0};
float e=0;

/* Funkcija za vleznite vrednosti */
void vlez(){
	int i=0;
	cout<<"Ravenka so forma "
				"an*x^n+an-1*x^n-1+...+a1*x+a0=0\n"
				"Vnesi go n: ";
	cin>>n;/* Stepenot na ravenkata */

	for(i=n;i;i--){
		cout<<"Vnesi go a"<<n<<": ";
		cin>>a[i];cout;
	}

/* Tocnosta na briblizuvanjeto */
	cout<<"Vnesi go e(Pr. 0.001): ";
	cin>>e;
}
/* Proveruva dali f[x] >=< 0 */
int resi(double x){
	int i;
	for(int i;i<n;i++)

}

void main(){
	vlez();
}