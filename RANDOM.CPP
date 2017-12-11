#include <fstream.h>
#include <stdlib.h>
#include <time.h>

void main(int,char *argv[]){
	 long i,n=atol(argv[2]),m=atoi(argv[3]);
	 time_t t;
	 srand((unsigned) time(&t));
	 ofstream fileout(argv[1],ios::out);
	 fileout<<n<<endl;
	 for(i=0;i<n;i++)
			 fileout<<(rand()%m)+1<<endl;
	 fileout.close();
}

