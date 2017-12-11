#include <string.h>
#include <iostream.h>
class CStr{
	char *n;
public:
	CStr(){n=NULL;};
	CStr(const char* str);
	CStr(CStr &str);
	~CStr();
	size_t len() const;
	operator const char*() const;
	CStr& operator=(const char* str);
	int operator ==(CStr& str);
	int operator !=(CStr& str);
	const char* mid(int np) const;
	const char* mid(int np, int nl) const;
	const char* right(int nl) const;
	const char* left(int nl) const;
	char operator[](int nc) const{
		if(nc<len() && nc>=0 && n!=NULL)
			return n[nc];
		else
			return '\0';
	};
};

inline CStr::CStr(const char* str){
	size_t l=strlen(str)+1;
	n=new char[l];
	memcpy(n,str,l);
}
inline CStr::CStr(CStr &str){
	size_t l=str.len()+1;
	n=new char[l];
	memcpy(n,str,l);
}
inline CStr::~CStr(){
	delete[] n;
}
size_t CStr::len() const{
	return strlen(n);
}
CStr& CStr::operator=(const char* str){
	size_t l=strlen(str)+1;
	delete[] n;
	n=new char[l];
	memcpy(n,str,l);
	return *this;
}
int CStr::operator==(CStr& str){
	return !strcmp(n,str);
};
int CStr::operator!=(CStr& str){
	return strcmp(n,str);
};
CStr::operator const char*() const {return n;}

const char* CStr::mid(int np) const{
	if(np<=len() && n!=NULL)
		return n+np;
	else
		return (const char*) '\0';
}
const char* CStr::mid(int np, int nl) const{
	int l=len();
	l++;
	if(np>l || nl<0 || n==NULL)
		return (const char*) '\0';
	if(np<0) np=0;
	if(nl>=l-np) return mid(np);
	if(np==0 && np+nl==l)	return n;
	char* t=new char[nl];
	memcpy(t,n+np,nl-1);
	t[nl]='\0';
	return t;
}

const char* CStr::right(int nl) const{
	if(nl<0) return (const char*) '\0';
	int l=len();
	l++;
	if(nl>=l) return n;
	char* t=new char[nl];
	memcpy(t,n+l-nl,nl);
	return t;
}

const char* CStr::left(int nl) const{
	if(nl<0) return (const char*) '\0';
	int l=len();
	l++;
	if(nl>=l) return n;
	char* t=new char[nl];
	memcpy(t,n,nl);
	t[nl]='\0';
	return t;
}

void main(){
	CStr a="Ova e string";
	CStr b=a,c(b);
	if(c==a)
		b="True";
	else if(c!=a)
		b="False";
	cout<<b<<endl;
	for(int i=0;i<a.len();i++)
		cout<<a[i];
	cout<<endl;
	c=a.left(7);
	cout<<c<<'\t'<<c.len()<<endl;
	a=c.mid(2,5);
	cout<<a<<endl;
}
