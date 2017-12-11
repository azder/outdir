#include <iostream.h>
#include <time.h>
#include <conio.h>
#include <stdlib.h>
void main(){
	randomize();
	int a=random(10);
	int i=0;
	clock_t c=random(10)+clock();
	while(!kbhit()){
		if(c<clock())
			c=a+clock();
		else
			cout<<c<<'\t'<<clock()<<endl;
	}
}