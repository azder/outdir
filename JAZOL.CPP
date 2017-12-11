#include <stdlib.h>
#include <iostream.h>
extern struct jazol tagjazol;
typedef jazol *pjazol;
struct info{
	int n;
	char* s;
};
struct jazol{
	info inf;
	pjazol prev,next;
};

void genlist(pjazol &prv){
	pjazol tmp=NULL;
	randomize();
	for(int i=0;i<10;i++){
		tmp=new jazol;
		if(tmp){
			tmp->prev=NULL;
			tmp->inf.s=new char[6];
			if(tmp->inf.s){
				tmp->inf.n=17;
				itoa(random(10),tmp->inf.s,10);
			}else
				tmp->inf.n=0;
			tmp->next=prv;
		}
		if(prv) prv->prev=tmp;
		prv=tmp;
	}
}
void printlist(pjazol prv){
	pjazol tmp=prv;
	while(tmp){
		cout<<tmp->inf.s<<" ";
		cout<<tmp->prev<<" "<<tmp<<" "<<tmp->next<<endl;
		tmp=tmp->next;
	}
	cout<<endl;
}
void delellist(pjazol prv,int n){
	while(prv){
		if(n==atoi(prv->inf.s)){
			delete[] prv->inf.s;
			(prv->prev)->next=prv->next;
			(prv->next)->prev=prv->prev;
			pjazol tmp=prv;
			prv=prv->next;
			delete tmp;
		}else
			prv=prv->next;
	}
}
void main(){
	pjazol prv=NULL;
	genlist(prv);
	printlist(prv);
	int n;
	cin>>n;
	delellist(prv,n);
	printlist(prv);
}