#include <iostream.h>
int bsearch(int t,int a[],int n){
	int l=0,r=n-1,mid;
	while(l<=r){
		mid=(l+r)/2;
		if(a[mid]==t) return mid;
		if(a[mid]<t)
			l=mid+1;
		else
			r=mid-1;
	}
	return -1;
}
void qsort(int left,int right,int a[]){
	int l=left,r=right;
	int mid=(a[left]+a[right])/2;
	do{
		while(a[l]<mid) l++;
		while(a[r]>mid) r--;
		if(l<=r){
			int tmp=a[l];
			a[l]=a[r];
			a[r]=tmp;
			l++;
			r--;
		}
	}while(l<=r);
	if(left<r) qsort(left,r,a);
	if(l<right) qsort(l,right,a);
}
struct tree{
	int val;
	tree *p,*l,*r;
};
int tadd(int val,tree **p){
	tree *q=NULL,*r=NULL;
	q=new tree;
	if(q==NULL) return -1;
	q->val=val;
	q->l=q->r=NULL;
	if(*p==NULL){
		*p=q;
		return 0;
	}
	r=*p;
	while(1){
		if(val<=r->val){
			if(r->l) r=r->l;
			else{r->l=q;break;}
		}else{
			if(r->r) r=r->r;
			else{r->r=q;break;}
		}
	}
	return 0;
}

int tdel(int val,tree **p){
	tree *q=NULL,*r=NULL,*t=NULL,*s=NULL;
	if(*p==NULL) return -1;
	for(q=*p;q && (q->val != val);){
		t=q;
		if(val<q->val) q=q->l;
		else q=q->r;
	}
	if(q==NULL) return -1;
	if((q->l==NULL) || (q->d==NULL))
		r=q;
	else
		for(r=q->r,t=q;r->l;t=r,r=r->l);
	if(r->l) s=r->l;
	else s=r->r;
	if(r!=q) q->val=r-val;
	if(t){
		if(t->l==r) t->l=s;
		else t->r=s;
	}else{*p=s;}
	delete r;
}

int b[]={2,6,5,3,8,9,7,0,1,4};
void main(){

	qsort(0,9,b);

	cout<<bsearch(17,b,10);
}