/*
judge@uva.es
acm.fi.uva.es
@JUDGE_ID: 7524KW 118 C
@BEGIN_OF_SOURCE_CODE
*/
#include <iostream.h>
void main(){
	register int i=0;
	register int k=1;
	do{
		if(k%2==0||k%3==0||k%5==0){i++;}
		k++;
	}while(i<1500);
	cout<<"The 1500'th ugly number is "<<--k<<'.'<<endl;
}
/*@END_OF_SOURCE_CODE*/