#include <string.h>
#include <iostream.h>
class str{
	char *n;
public:
	str(){n=NULL;};
	str(const char* m){
		n=new char[strlen(m)+1];
		strcpy(n,m);
	};
	~str(){delete []n;};
	operator const char *(){return n;};
	str& operator=(const char* a){
		delete []n;
		n=new char[strlen(a)+1];
		strcpy(n,a);
		return *this;
	};

};
void main(){
	str a="Zdravo";
	str b;
	str c=a;
	b=c;
	c="Nezdravo";
	cout<<a<<' '<<b<<' '<<c<<endl;
}