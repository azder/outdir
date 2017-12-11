#include <iostream.h>
#include <windows.h>
void main(int argc,char** argv){
	long a=-1;
	unsigned char b=LOBYTE(a),c=HIBYTE(a);
	cout<<"Number:"<<a;
	cout<<" HI:"<<long(c)<<" LO:"<<long(b)<<endl;
}