#include<fstream.h>
#include<conio.h>
#include<stdlib.h>
//#include<mem.h>
#ifdef RAND_MAX
#undef RAND_MAX
#define RAND_MAX 3000
#elif
#define RAND_MAX 3000
#endif
#define N 300
int main(){
	unsigned int sporedba=1,i,j,niza[N],nuli[N],edinici[N];
	//randomize();
	for(i=0;i<N;i++)
	 niza[i]=rand();
	unsigned index0=0;
	unsigned index1=0;
	unsigned t;
	for(i=0;i<16;i++)
	{
	 for(j=0;j<N;j++)
		if(niza[j] & sporedba)
		 edinici[index1++]=niza[j];
		else
		 nuli[index0++]=niza[j];
	for(t=0;t<index1;t++)
	 niza[t]=edinici[t];
	for(t=0;t<index0;t++)
	 niza[t+index1]=nuli[t];
	// memcpy(niza,edinici,index1*sizeof(int));
	// memcpy(&niza[index1],nuli,index0*sizeof(int));
	 sporedba<<=1;
	}

 ofstream dat("Radix.txt",ios::out);
 for(i=0;i<N;i++)
	dat<<niza[i]<<endl;
 dat.close();
 return 0;
 }