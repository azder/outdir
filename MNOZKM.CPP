#include <iostream.h>
#include <string.h>
#include <stdlib.h>
#define N 30
#define N2 100
class Mnoz{
	friend Mnoz;
	static int nmnoz;
	char ime[N];
	int n;
	char el[N2][N];
public:
	operator char*(){return ime;}
	void nula();
	int najdi(char *nel);
	int kardinalen(){return n;}
	void napolni(int n);
	void pecati();
	void dodaj(char *nel);
	void bubble();
	Mnoz operator&&(Mnoz);
	Mnoz operator||(Mnoz);
	char* operator[](int);
	int broj(){return n;};
	void pecatibroj();
	void smeniime(char* nime){
		strcpy(ime,nime);
	}
	void smeniime(int i){
		char tmp[N2];
		strcpy(ime,strcpy("Mnozestvo",itoa(i,tmp,10)));
 }

	Mnoz(){
		nmnoz++;
		n=0;
		smeniime(nmnoz);
		nula();
	};
	Mnoz(char *nime){
		n=0;
		strcpy(ime,nime);
		nmnoz++;
		if(ime==NULL || 0==strlen(ime))	smeniime(nmnoz);
		nula();
	};
	Mnoz(char *nime,int nn){
		n=nn;
		strcpy(ime,nime);
		nmnoz++;
		if(ime==NULL || 0==strlen(ime))	smeniime(nmnoz);
		nula();
		napolni(n);
	};

};//class end

char* Mnoz::operator[](int nn){
	if(nn<0 || nn>=n) return NULL;
	return el[nn];
}
int Mnoz::najdi(char *nel){
	for(int i=0;i<n;i++)
		if(0==strcmp(el[i],nel))
			return i;
	return -1;
};

void Mnoz::pecatibroj(){
	cout<<"|"<<ime<<"| = "<<broj()<<endl;
}

void Mnoz::napolni(int nn){
	char s[N];
	nula();
	n=nn;
	for(int i=0;i<nn;){
		cout<<ime<<"["<<i<<"]= ";
			cin>>s;
			if(0>najdi(s)){
				strcpy(el[i],s);
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
	cout<<" }\n";
}

int Mnoz::nmnoz=0;

void Mnoz::dodaj(char *nel){
	if(0<=najdi(nel)) return;
	strcpy(el[n++],nel);
	bubble();
}

Mnoz Mnoz::operator&&(Mnoz mn){
	char tmp[N2]="(";
	strcat(tmp,ime);
	strcat(tmp," && ");
	strcat(tmp,mn.ime);
	strcat(tmp,")");
	Mnoz pres(tmp);
	for(int i=0;i<mn.kardinalen();i++)
		if(0<=najdi(mn.el[i])) pres.dodaj(mn.el[i]);
	return pres;
}
Mnoz Mnoz::operator||(Mnoz mn){
	char tmp[N2]="(";
	strcat(tmp,ime);
	strcat(tmp," || ");
	strcat(tmp,mn.ime);
	strcat(tmp,")");
	Mnoz un(tmp);
	for(int i=0;i<kardinalen();i++)
		un.dodaj(el[i]);
	for(i=0;i<mn.kardinalen();i++)
		un.dodaj(mn.el[i]);
	return un;
}
void Mnoz::nula(){
	for(int i=0;i<N2;i++)
		strset(el[i],NULL);
	n=0;
}
void Mnoz::bubble(){
	char tmp[N];
	for(int j=0;j<n;j++)
		for(int i=1;i<n;i++){
			if(0>strcmp(el[i],el[i-1])){
				strcpy(tmp,el[i]);
				strcpy(el[i],el[i-1]);
				strcpy(el[i-1],tmp);
			}
		}
}
void main(){
	int n=0;
	cout<<"+-----------------+";
	cout<<"|Goran Peoski 8583|";
	cout<<"+-----------------+";
	cout<<"Kolku mnozestva postojat? ";
	cin>>n;
	Mnoz presek("Presek"),unija("Unija");
	for(int i=0;i<n;i++){
		cout<<"Vnesi go brojot na elementi na "
					"mnozestvoto broj "<<i+1<<" : ";
		int n;
		Mnoz m;
		cin>>n;
		m.smeniime(i+1);
		m.napolni(n);
		if(i==1){
		 unija=m;
		 presek=m;
		}else{
			unija = unija || m;
			presek = presek && m;
		}
	}
	presek.smeniime("Presek");
	presek.pecati();
	presek.pecatibroj();
//	unija.smeniime("Unija");
//	unija.pecati();
//	unija.pecatibroj();
}