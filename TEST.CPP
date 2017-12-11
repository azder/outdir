#include <iostream.h>
void PecatiBukva(char bkv);
void main(){
	PecatiBukva('A');
}
void PecatiBukva(char bkv){
	for(char c = 'A'; c < bkv; c++)	cout << " ";
	if(bkv <= 'Z'){
		cout << "bukva " << bkv << endl;
		PecatiBukva(bkv + 1);
	}else
		cout << "KRAJ" << endl;
}