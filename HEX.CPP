#include <iostream.h>
#include <stdlib.h>
#include <dos.h>
void main(){
	for(;;){
		delay(1);
		cout<<hex<<random(16)<<random(16)<<"  ";
	}
}