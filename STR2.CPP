#include<iostream.h>
#include<string.h>
class string{
	friend string;
	char *n;
public:
	string(){n=NULL;};
	string(const char* str){
		n=new char[strlen(str)+1];
		strcpy(n,str);
	};
	~string(){delete[] n;};
	const string& operator=(const string v);
	operator const char*(){return n;};
	int len()const{return strlen(n);};
};

inline const string& string::operator=(const string v){
	delete[] n;
	n=new char[v.len()+1];
	strcpy(n,v.n);
	return *this;
}
void main(){
	string a="Darko";
	string b;
	string c=b=a;
	c=a;
	a="ASDFASDF";
}