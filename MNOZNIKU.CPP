#include <iostream.h>
#include <string.h>
#include <stdlib.h>
#define D 100
class Mnoz{
public:
	char ime[D];
	int n;
	char el[D];
	void nula();
	int najdi(char nel);
	void napolni(int num);
	void pecati();
	void dodaj(char nel);
	void bubble();
	Mnoz presek(Mnoz);
	Mnoz unija(Mnoz);
	Mnoz(char *nime){
		strcpy(ime,nime);
		nula();
		n=0;
	}
	Mnoz(){
		nula();
		napolni(0);
	};
};

int Mnoz::najdi(char nel){
	for(int i=0;i<n;i++)
		if(el[i]==nel)return i;
	return -1;
};

void Mnoz::napolni(int num){
	nula();
//	cout<<"Vnesi go imeto na mnozestvoto: ";cin>>ime;
	char c;
	cout<<"Kolku elementi ima mnozestvoto "<<num<<" ? ";
	cin>>n;
	for(int i=0;i<n;){
		cout<<ime<<"["<<i<<"]= ";
		cin>>c;
		if(0>najdi(c)){
			el[i]=c;
			i++;
		}
	}
	bubble();
}
void Mnoz::pecati(){
	cout<<ime<<" = { ";
	for(int i=0;i<n-1;i++)
		cout<<el[i]<<", ";
	if(n>0) cout<<el[n-1];
	cout<<" }\n"<<ime<<" ima "<<n<<" elementi\n";
}

void Mnoz::dodaj(char nel){
	if(0<=najdi(nel)) return;
	el[n++]=nel;
	bubble();
}

Mnoz Mnoz::presek(Mnoz mn){
	Mnoz presek("Presekot");
	for(int i=0;i<mn.n;i++)
		if(-1!=najdi(mn.el[i]))
			presek.dodaj(mn.el[i]);
	return presek;
}
Mnoz Mnoz::unija(Mnoz mn){
	Mnoz unija("Unijata");
	for(int i=0;i<n;i++)
		unija.dodaj(el[i]);
	for(i=0;i<mn.n;i++)
		unija.dodaj(mn.el[i]);
	return unija;
}
void Mnoz::nula(){
	for(int i=0;i<D;i++) el[i]='\0';
}
void Mnoz::bubble(){
	char c;
	for(int j=0;j<n;j++)
		for(int i=1;i<n;i++){
			if(el[i-1]>el[i]){
				c=el[i];
				el[i]=el[i-1];
				el[i-1]=c;
			}
		}
}
void main(){
	int i,n;
	cout<<"student: Svinarski Igor br. index 7386\n";
	cout<<"Kolkav e brojot na mnozestva? ";
	cin>>n;
	int num=1;
	Mnoz unija("Unijata"),mnoz("mnoz");
	for(i=0;i<n;i++){
		mnoz.napolni(num++);
		unija=unija.unija(mnoz);
	}

	unija.pecati();
}