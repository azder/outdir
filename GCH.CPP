#include <conio.h>
#include <stdlib.h>
#include <iostream.h>
void main(){
	randomize();
	for(;;){
		for(int i=0;i<10000;i++);
		cout<<char(random(95)+32);
		cout<<" ";
	}
}